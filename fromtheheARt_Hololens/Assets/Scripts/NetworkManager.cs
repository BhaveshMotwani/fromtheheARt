using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class NetworkManager : MonoBehaviour {

    /// <summary>Connect automatically? If false you can set this to true later on or call ConnectUsingSettings in your own scripts.</summary>
        public GameObject headPrefab;
        public byte Version = 1;
        public GameObject HMD;
        public GameObject LHandPosition;
        public GameObject RHandPosition;
        public GameObject LhandPrefab;
        public GameObject RhandPrefab;
        public string StartingLevel;


    public virtual void Start()
    {
        PhotonNetwork.ConnectUsingSettings(Version + "." + SceneManagerHelper.ActiveSceneBuildIndex);
        // enable sync level
        PhotonNetwork.automaticallySyncScene = true;
    }



    // below, we implement some callbacks of PUN
    // you can find PUN's callbacks in the class PunBehaviour or in enum PhotonNetworkingMessage
    
    public virtual void OnConnectedToMaster()
    {
        Debug.Log("OnConnectedToMaster() was called by PUN. Now this client is connected and could join a room. Calling: PhotonNetwork.JoinRandomRoom();");
        PhotonNetwork.JoinRandomRoom();
    }

    public virtual void OnJoinedLobby()
    {
        Debug.Log("OnJoinedLobby(). This client is connected and does get a room-list, which gets stored as PhotonNetwork.GetRoomList(). This script now calls: PhotonNetwork.JoinRandomRoom();");
        PhotonNetwork.JoinRandomRoom();
    }

    public virtual void OnPhotonRandomJoinFailed()
    {
        Debug.Log("OnPhotonRandomJoinFailed() was called by PUN. No random room available, so we create one. Calling: PhotonNetwork.CreateRoom(null, new RoomOptions() {maxPlayers = 4}, null);");
        PhotonNetwork.CreateRoom(null, new RoomOptions() { MaxPlayers = 4 }, null);
    }

    public virtual void OnCreatedRoom()
    {
        // **where you name the trigger 
        PhotonNetwork.LoadLevel(StartingLevel);
    }
    // the following methods are implemented to give you some context. re-implement them as needed.

    public virtual void OnFailedToConnectToPhoton(DisconnectCause cause)
    {
        Debug.LogError("Cause: " + cause);
    }

    public void OnJoinedRoom()
    {
        Debug.Log("OnJoinedRoom() called by PUN. Now this client is in a room. From here on, your game would be running. For reference, all callbacks are listed in enum: PhotonNetworkingMessage");
        PhotonNetwork.Instantiate(headPrefab.name, HMD.transform.position, HMD.transform.rotation, 0);
        PhotonNetwork.Instantiate(LhandPrefab.name, LHandPosition.transform.position, LHandPosition.transform.rotation, 0);
        PhotonNetwork.Instantiate(RhandPrefab.name, RHandPosition.transform.position, RHandPosition.transform.rotation, 0);
    }
}

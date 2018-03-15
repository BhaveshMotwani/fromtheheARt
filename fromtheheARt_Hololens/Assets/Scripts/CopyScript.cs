using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class CopyScript : Photon.MonoBehaviour {

    public int index = 1;
    // script to make the headset + controllers persistent when switching scenes
    void Awake()
    {
        DontDestroyOnLoad(transform.gameObject);

    }
    // Update is called once per frame
    void Update () {
        if (photonView.isMine)
        {
            switch (index)
            {
                case 1:
                    transform.position = HMDManager.Instance.head.transform.position;
                    transform.rotation = HMDManager.Instance.head.transform.rotation;
                    break;
                case 2:
                    transform.position = HMDManager.Instance.leftHand.transform.position;
                    transform.rotation = HMDManager.Instance.leftHand.transform.rotation;
                    break;
                case 3:
                    transform.position = HMDManager.Instance.rightHand.transform.position;
                    transform.rotation = HMDManager.Instance.rightHand.transform.rotation;
                    break;
                //case 4:
                //    transform.position = HMDManager.Instance.skateBoard.transform.position;
                //    transform.rotation = HMDManager.Instance.skateBoard.transform.rotation;
                //    break;
                
            }
           
        }

	}
    
}

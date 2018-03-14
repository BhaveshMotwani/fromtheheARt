using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class HMDManager : MonoBehaviour {

    public GameObject head;
    public GameObject leftHand;
    public GameObject rightHand;
    //public GameObject skateBoard;

    // **Singleton to get access to the variables global access**
    public static HMDManager Instance; 

    void Awake()
    {
        if(Instance == null)
        {
            Instance = this;
        }
    }
    void onDestroy()
    {
        if(Instance == this)
        {
            Instance = null;
        }
    }
	
}

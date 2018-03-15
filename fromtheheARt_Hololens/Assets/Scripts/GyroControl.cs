using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class GyroControl : MonoBehaviour {

	private bool gyroEnabled;
	private Gyroscope gyro;
    public GameObject Bubble;
    float debugVal =0;

	// // Use this for initialization
	private void Start () {
		gyroEnabled = EnableGyro();
	}
	
	private bool EnableGyro(){
		if(SystemInfo.supportsGyroscope){
			gyro = Input.gyro;
			gyro.enabled = true;
			return true;
		}

		return false;
	}

	protected void OnGUI()
    {
        GUI.skin.label.fontSize = Screen.width / 40;

        GUILayout.Label("Orientation: " + Screen.orientation);
        GUILayout.Label("input.gyro.attitude: " + Input.gyro.attitude);
		GUILayout.Label("intput.gyro.euler: " + (Input.gyro.attitude.eulerAngles.z%10).ToString());
        GUILayout.Label("intput.gyro.acceleration: " + Input.acceleration.ToString());
    }



	// // Update is called once per frame
	private void Update() {
		transform.rotation = GyroToUnity(Input.gyro.attitude);
        Bubble.transform.localScale = new Vector3(Input.gyro.attitude.eulerAngles.z%10, Input.gyro.attitude.eulerAngles.z % 10, Input.gyro.attitude.eulerAngles.z % 10);
	}	

	private static Quaternion GyroToUnity(Quaternion q)
    {
        return new Quaternion(q.x, q.y, -q.z, -q.w);
    }
}

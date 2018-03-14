using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class GyroControl : MonoBehaviour {

	private bool gyroEnabled;
	private Gyroscope gyro;

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
        //GUILayout.Label("input.gyro.attitude: " + Input.gyro.attitude);
		GUILayout.Label("input.gyro.euler: " + Input.gyro.attitude.eulerAngles.ToString());
		GUILayout.Label ("input.acceleration: " + Input.acceleration.ToString());
    }


	// // Update is called once per frame
	private void Update() {
//		float speed = 10.0F;
		transform.rotation = GyroToUnity(Input.gyro.attitude);
//		Vector3 dir = Vector3.zero;
//		dir.x = -Input.acceleration.y;
//		dir.z = Input.acceleration.x;
//		if (dir.sqrMagnitude > 1)
//			dir.Normalize();
//
//		dir *= Time.deltaTime;
//		transform.Translate(dir * speed);
	}	

	private void Data(){
		float gyroZ = Input.gyro.attitude.eulerAngles.z;
		float accZ = Input.acceleration.z;
		Debug.Log(gyroZ);
		Debug.Log(accZ);
	}

	private static Quaternion GyroToUnity(Quaternion q)
    {
        return new Quaternion(q.x, q.y, -q.z, -q.w);
    }
}

using UnityEngine;
using System.Collections;

public class Rotate : MonoBehaviour {

	// Use this for initialization
	private Vector3 rotateDirection = new Vector3(180,90,45);

	void Update () {
		transform.Rotate (rotateDirection * Time.deltaTime);
	}
}






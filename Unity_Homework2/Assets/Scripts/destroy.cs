using UnityEngine;
using System.Collections;

public class destroy : MonoBehaviour {

	// Use this for initialization
	void OnTriggerEnter2D (Collider2D Lego) {
		Destroy (Lego.gameObject);
	}
	
	// Update is called once per frame
	void Update () {
	
	}
}

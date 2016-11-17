using UnityEngine;
using System.Collections;

public class Move : MonoBehaviour {

	private Rigidbody rb;
	public float speed;

	void Start () {
		rb = GetComponent <Rigidbody> ();
	}

	void Update () {


	}

	void FixedUpdate(){
		float moveHorizontal = Input.GetAxis("Horizontal");
		float moveVertical = Input.GetAxis("Vertical");

		if (Input.GetKey (KeyCode.UpArrow)) {
			moveVertical = 1;
		} else if (Input.GetKey (KeyCode.DownArrow)) {
			moveVertical = -1;
		} else {
			moveVertical = 0;
		}

		if (Input.GetKeyDown ("space")){
			transform.Translate(Vector3.up * 35 * Time.deltaTime, Space.World);
		} 

		if (Input.GetKeyDown ("space") && Input.GetKey (KeyCode.UpArrow)){
			transform.Translate(Vector3.up * 35 * Time.deltaTime, Space.World);
			moveVertical = 5;
		} 

		if (Input.GetKeyDown ("space") && Input.GetKey (KeyCode.DownArrow)){
			transform.Translate(Vector3.up * 35 * Time.deltaTime, Space.World);
			moveVertical = -5;
		} 


		if (Input.GetKeyDown ("space") && Input.GetKey (KeyCode.RightArrow)){
			transform.Translate(Vector3.up * 35 * Time.deltaTime, Space.World);
			moveHorizontal = 5;
		} 

		if (Input.GetKeyDown ("space") && Input.GetKey (KeyCode.LeftArrow)){
			transform.Translate(Vector3.up * 35 * Time.deltaTime, Space.World);
			moveHorizontal = -3;
		} 


		//		Debug.log("MoveVertical" + moveVertical);

		Vector3 movement = new Vector3 (moveHorizontal,0.0f,moveVertical);


		rb.AddForce (movement);
	}

	void LateUpdate(){
	}


	void OnTriggerEnter (Collider coll){
		if (coll.gameObject.CompareTag ("Collectable")) {
			coll.gameObject.SetActive (false);
		}

	}
}
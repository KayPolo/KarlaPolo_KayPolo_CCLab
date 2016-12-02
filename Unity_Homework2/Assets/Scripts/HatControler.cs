﻿using UnityEngine;
using System.Collections;

public class HatControler : MonoBehaviour {

	public Camera cam;

	private float maxWidth;

	public Rigidbody2D rb2D;
	public Renderer rend;



	void Start () {
		rb2D = GetComponent<Rigidbody2D>();
		rend = GetComponent<Renderer> ();

		if (cam == null) {
			cam = Camera.main;
		}
		Vector3 upperCorner = new Vector3 (Screen.width, Screen.height, 0.0f);
		Vector3 targetWidth = cam.ScreenToWorldPoint(upperCorner);
		float boxWidth = rend.bounds.extents.x;
		maxWidth = targetWidth.x - boxWidth;
	}	
	

	void FixedUpdate () {
		Vector3 rawPosition= cam.ScreenToWorldPoint(Input.mousePosition);
		Vector3 targetPosition = new Vector3 (rawPosition.x, -2.5f, 0.0f);
		float targetWidth = Mathf.Clamp (targetPosition.x, -maxWidth, maxWidth);
		targetPosition = new Vector3 (targetWidth, targetPosition.y, targetPosition.z);
		rb2D.MovePosition(targetPosition);
	

	
	}
}
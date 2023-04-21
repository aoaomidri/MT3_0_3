#pragma once
#include "Vector3.h"
#include"Matrix4x4.h"
#include<math.h>
#include<Novice.h>

class Matrix {
public:
	Matrix();


private:
	Vector3 translate_;

	Vector3 scale_;

	Vector3 point;

	Matrix4x4 transformMatrix;
public:
	void Update();

	Matrix4x4 MakaScaleMatrix(const Vector3& scale);

	Matrix4x4 MakeTranslateMatrix(const Vector3& translate);

	//ƒxƒNƒgƒ‹•ÏŠ·
	Vector3 Transform(const Vector3& v, const Matrix4x4& m);	

	Matrix4x4 ScaleMatrix;

	Matrix4x4 TranslateMatrix;

	Vector3 transformed;
};


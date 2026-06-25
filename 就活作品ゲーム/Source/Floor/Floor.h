#pragma once
#include "../DxLib.h"

// ???N???X
class Floor
{
public:
	Floor();
	~Floor();

public:
	void Init();
	void Load();
	void Start();
	void Step();
	void Update();
	void Draw();
	void Fin();

private:
	int m_Handle;
	VECTOR m_Pos;
	VECTOR m_Scale;
};

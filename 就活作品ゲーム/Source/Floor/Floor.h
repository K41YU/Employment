<<<<<<< HEAD
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
=======
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
>>>>>>> bf00ff0f364c80a951f2a7f3de9aac8cdc752734

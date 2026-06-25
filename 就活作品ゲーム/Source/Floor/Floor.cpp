<<<<<<< HEAD
#include "Floor.h"

#define DEFAULT_POS VGet(0.0f, 0.0f, 0.0f)
#define DEFAULT_SCALE VGet(100.0f, 1.0f, 100.0f)


// コンストラクタ
Floor::Floor()
{
	m_Handle = -1;
	m_Pos = VGet(0.0f, 0.0f, 0.0f);
	m_Scale = VGet(1.0f, 1.0f, 1.0f);
}

// デストラクタ
Floor::~Floor()
{
	Fin();
}

void Floor::Init()
{

}

void Floor::Load()
{
	if (m_Handle != -1)
	{
		MV1DeleteModel(m_Handle);
		m_Handle = -1;
	}

	m_Handle = MV1LoadModel(_T("Data/Floor/Floor.x"));
}

void Floor::Start()
{
	m_Pos = DEFAULT_POS;
	m_Scale = DEFAULT_SCALE;
}

void Floor::Step()
{
}

void Floor::Update()
{
	if (m_Handle == -1)
	{
		return;
	}

	MV1SetPosition(m_Handle, m_Pos);
	MV1SetScale(m_Handle, m_Scale);
}

void Floor::Draw()
{
	if (m_Handle == -1)
	{
		return;
	}

	MV1DrawModel(m_Handle);
}

void Floor::Fin()
{
	if (m_Handle != -1)
	{
		MV1DeleteModel(m_Handle);
		m_Handle = -1;
	}
}

=======
#include "Floor.h"

#define DEFAULT_POS VGet(0.0f, 0.0f, 0.0f)
#define DEFAULT_SCALE VGet(100.0f, 1.0f, 100.0f)


// コンストラクタ
Floor::Floor()
{
	m_Handle = -1;
	m_Pos = VGet(0.0f, 0.0f, 0.0f);
	m_Scale = VGet(1.0f, 1.0f, 1.0f);
}

// デストラクタ
Floor::~Floor()
{
	Fin();
}

void Floor::Init()
{

}

void Floor::Load()
{
	if (m_Handle != -1)
	{
		MV1DeleteModel(m_Handle);
		m_Handle = -1;
	}

	m_Handle = MV1LoadModel(_T("Data/Floor/Floor.x"));
}

void Floor::Start()
{
	m_Pos = DEFAULT_POS;
	m_Scale = DEFAULT_SCALE;
}

void Floor::Step()
{
}

void Floor::Update()
{
	if (m_Handle == -1)
	{
		return;
	}

	MV1SetPosition(m_Handle, m_Pos);
	MV1SetScale(m_Handle, m_Scale);
}

void Floor::Draw()
{
	if (m_Handle == -1)
	{
		return;
	}

	MV1DrawModel(m_Handle);
}

void Floor::Fin()
{
	if (m_Handle != -1)
	{
		MV1DeleteModel(m_Handle);
		m_Handle = -1;
	}
}

>>>>>>> bf00ff0f364c80a951f2a7f3de9aac8cdc752734

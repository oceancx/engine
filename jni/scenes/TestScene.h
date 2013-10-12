#pragma once

#include "../../StarEngine/jni/defines.h"
#include "../../StarEngine/jni/SceneManaging/BaseScene.h"
#include "../../StarEngine/jni/Logger.h"
#include "../../StarEngine/jni/Context.h"
#include "../../StarEngine/jni/SceneGraph/Object.h"
#include "../../StarEngine/jni/StarComponents.h"
#include "../Gestures/DoubleTapGesture.h"
#include "../../StarEngine/jni/Objects/FreeCamera.h"

class TestScene : public star::BaseScene
{
public:
	TestScene(const tstring& name);
	virtual ~TestScene();

	status Initialize(const star::Context& context);
	status Update(const star::Context& context);
	status Draw();

private:
	DoubleTapGesture* m_TapGesture;
	int m_TotalFrames;
	int m_Step;
	int m_FPS;
	float m_PassedMiliseconds;

	float mRed, mGreen, mBlue;

	star::Object	*m_pObjectOne, 
			*m_pObjectTwo, 
			*m_pObjectThree,
			*m_pObjectFour, 
			*m_pObjectFive, 
			*m_pObjectSix,
			*m_pSpriteObject;

	star::FreeCamera *m_pActiveCamera;

	star::RectangleColliderComponent* m_pRectCompOne;
	star::CircleColliderComponent	*m_pRectCompTwo;

	star::PathFindNodeComponent	*m_pPathFindComp, 
								*m_pPathFindCompTwo, 
								*m_pPathFindCompThree, 
								*m_pPathFindCompFour, 
								*m_pPathFindCompFive, 
								*m_pPathFindCompSix;

	star::SpriteComponent *m_pSpriteComp1;
		
	TestScene(const TestScene& t);
	TestScene(TestScene&& t);
	TestScene& operator=(const TestScene& t);
};

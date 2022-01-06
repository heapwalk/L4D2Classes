#include "CAbilityBase.h"

#pragma pack(push,1)
	class CAbilityTongue : 
		 public CAbilityBase // 0x658
	{
	public:
		bool   	m_bendPositions[1]; // 0x0
		unsigned char _0x0[0x658];
		int    	m_tongueGrabStartingHealth; // 0x658
		float  	m_tongueHitRange; // 0x65c
		float  	m_tongueHitTimestamp; // 0x660
		int    	m_tongueHitWasAmbush; // 0x664
		float  	m_tongueVictimDistance; // 0x668
		float  	m_tongueVictimPositionTime; // 0x66c
		float  	m_tongueVictimLastOnGroundTime; // 0x670
		int    	m_potentialTarget; // 0x674
		int    	m_currentTipTarget; // 0x678
		unsigned char _0x67c[0x28];
		int    	m_tongueState; // 0x6a4
		vector3	m_bendPositions_0; // 0x6a8
		unsigned char _0x6b4[0x6c];
		int    	m_bendPointCount; // 0x720
		vector3	m_tipPosition; // 0x724
	};
#pragma pack(pop)

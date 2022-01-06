#include "CBaseToggle.h"

#pragma pack(push,1)
	class CFuncElevator : 
		 public CBaseToggle // 0x0
	{
	public:
		unsigned char _0x0[0x124];
		vector3	m_vecOrigin; // 0x124
		unsigned char _0x130[0x514];
		float  	m_destinationFloorPosition; // 0x644
		float  	m_maxSpeed; // 0x648
		float  	m_acceleration; // 0x64c
		float  	m_currentSpeed; // 0x650
		float  	m_movementStartTime; // 0x654
		float  	m_movementStartSpeed; // 0x658
		float  	m_movementStartZ; // 0x65c
		int    	m_isMoving; // 0x660
	};
#pragma pack(pop)

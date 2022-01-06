#include "CBaseEntity.h"

#pragma pack(push,1)
	class CPoseController : 
		 public CBaseEntity // 0x5fc
	{
	public:
		unsigned char _0x5fc[0x3c];
		int    	m_hProps[4]; // 0x638
		bool   	m_chPoseIndex[4]; // 0x648
		int    	m_bPoseValueParity; // 0x64c
		float  	m_fPoseValue; // 0x650
		float  	m_fInterpolationTime; // 0x654
		int    	m_bInterpolationWrap; // 0x658
		float  	m_fCycleFrequency; // 0x65c
		int    	m_nFModType; // 0x660
		float  	m_fFModTimeOffset; // 0x664
		float  	m_fFModRate; // 0x668
		float  	m_fFModAmplitude; // 0x66c
	};
#pragma pack(pop)

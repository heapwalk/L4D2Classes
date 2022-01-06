#include "CBaseEntity.h"

#pragma pack(push,1)
	class CEnvTonemapController : 
		 public CBaseEntity // 0x5fc
	{
	public:
		unsigned char _0x5fc[0x3c];
		int    	m_bUseCustomAutoExposureMin; // 0x638
		int    	m_bUseCustomAutoExposureMax; // 0x639
		int    	m_bUseCustomBloomScale; // 0x63a
		float  	m_flCustomAutoExposureMin; // 0x63c
		float  	m_flCustomAutoExposureMax; // 0x640
		float  	m_flCustomBloomScale; // 0x644
		float  	m_flCustomBloomScaleMinimum; // 0x648
		float  	m_flBloomExponent; // 0x64c
		float  	m_flBloomSaturation; // 0x650
		float  	m_flTonemapPercentTarget; // 0x654
		float  	m_flTonemapPercentBrightPixels; // 0x658
		float  	m_flTonemapMinAvgLum; // 0x65c
	};
#pragma pack(pop)

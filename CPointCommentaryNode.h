#include "CBaseAnimating.h"

#pragma pack(push,1)
	class CPointCommentaryNode : 
		 public CBaseAnimating // 0x930
	{
	public:
		unsigned char _0x930[0x28];
		int    	m_bActive; // 0x958
		float  	m_flStartTime; // 0x95c
		char*  	m_iszCommentaryFile; // 0x960
		unsigned char _0x964[0x100];
		char*  	m_iszCommentaryFileNoHDR; // 0xa64
		unsigned char _0xa68[0x100];
		char*  	m_iszSpeakers; // 0xb68
		unsigned char _0xb6c[0xfc];
		int    	m_iNodeNumber; // 0xc68
		int    	m_iNodeNumberMax; // 0xc6c
		unsigned char _0xc70[0x4];
		int    	m_hViewPosition; // 0xc74
	};
#pragma pack(pop)

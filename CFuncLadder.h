#include "CBaseEntity.h"

#pragma pack(push,1)
	class CFuncLadder : 
		 public CBaseEntity // 0x5fc
	{
	public:
		unsigned char _0x5fc[0x3c];
		vector3	m_vecLadderDir; // 0x638
		unsigned char _0x644[0x14];
		vector3	m_vecPlayerMountPositionTop; // 0x658
		vector3	m_vecPlayerMountPositionBottom; // 0x664
		unsigned char _0x670[0x1];
		int    	m_bFakeLadder; // 0x671
	};
#pragma pack(pop)

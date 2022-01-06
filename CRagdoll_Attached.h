
#pragma pack(push,1)
	class CRagdoll_Attached
	{
	public:
		unsigned char _0x0[0xc68];
		vector3	m_attachmentPointBoneSpace; // 0xc68
		unsigned char _0xc74[0xc];
		vector3	m_attachmentPointRagdollSpace; // 0xc80
		int    	m_ragdollAttachedObjectIndex; // 0xc8c
		int    	m_boneIndexAttached; // 0xc90
	};
#pragma pack(pop)

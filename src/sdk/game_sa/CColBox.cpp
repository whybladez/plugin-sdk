#include "CColBox.h"

void CColBox::Set(CVector  const& sup, CVector  const& inf, unsigned char material , unsigned char flags, unsigned char lighting)
{
	((void (__thiscall *)(CColBox *, CVector  const&, CVector  const&, unsigned char, unsigned char, unsigned char))0x40EE70)(this, sup, inf, material , flags, lighting);
}

void CColBox::operator=(CColBox  const& right)
{
	((void (__thiscall *)(CColBox *, CColBox  const&))0x40EEC0)(this, right);
}
#define UNLOADED_FILE   1
#include <idc.idc>

static main(void)
{
	Enums();              // enumerations
	Structures();         // structure types
	LowVoids(0xFFC);
	HighVoids(0x5218);
}

//------------------------------------------------------------------------
// Information about enum types

static Enums(void) {
    auto id;
    BeginTypeUpdating(UTP_ENUM);
    EndTypeUpdating(UTP_ENUM);
}

static Structures_0(id) {
    auto mid;

	id = AddStrucEx(-1,"JNINativeInterface",0);
	id = AddStrucEx(-1,"JNIInvokeInterface",0);
	
	id = GetStrucIdByName("JNINativeInterface");
	
	/*
	long AddStrucMember(
		long id,
		string name,
		long offset,
		long flag,
		long typeid,
		long nbytes,
        long target,
		long tdelta, 
		long reftype);
	*/
	mid = AddStrucMember(id,"reserved0",					0,		0x25500400,	0XFFFFFFFF,	4,	0XFFFFFFFF,	0,	0x000002);
	mid = AddStrucMember(id,"reserved1",					0X4,	0x25500400,	0XFFFFFFFF,	4,	0XFFFFFFFF,	0,	0x000002);
	mid = AddStrucMember(id,"reserved2",					0X8,	0x25500400,	0XFFFFFFFF,	4,	0XFFFFFFFF,	0,	0x000002);
	mid = AddStrucMember(id,"reserved3",					0XC,	0x25500400,	0XFFFFFFFF,	4,	0XFFFFFFFF,	0,	0x000002);
	mid = AddStrucMember(id,"GetVersion",					0X10,	0x25500400,	0XFFFFFFFF,	4,	0XFFFFFFFF,	0,	0x000002);
	mid = AddStrucMember(id,"DefineClass",					0X14,	0x25500400,	0XFFFFFFFF,	4,	0XFFFFFFFF,	0,	0x000002);
	mid = AddStrucMember(id,"FindClass",					0X18,	0x25500400,	0XFFFFFFFF,	4,	0XFFFFFFFF,	0,	0x000002);
	mid = AddStrucMember(id,"FromReflectedMethod",			0X1C,	0x25500400,	0XFFFFFFFF,	4,	0XFFFFFFFF,	0,	0x000002);
	mid = AddStrucMember(id,"FromReflectedField",			0X20,	0x25500400,	0XFFFFFFFF,	4,	0XFFFFFFFF,	0,	0x000002);
	mid = AddStrucMember(id,"ToReflectedMethod",			0X24,	0x25500400,	0XFFFFFFFF,	4,	0XFFFFFFFF,	0,	0x000002);
	mid = AddStrucMember(id,"GetSuperclass",				0X28,	0x25500400,	0XFFFFFFFF,	4,	0XFFFFFFFF,	0,	0x000002);
	mid = AddStrucMember(id,"IsAssignableFrom",				0X2C,	0x25500400,	0XFFFFFFFF,	4,	0XFFFFFFFF,	0,	0x000002);
	mid = AddStrucMember(id,"ToReflectedField",				0X30,	0x25500400,	0XFFFFFFFF,	4,	0XFFFFFFFF,	0,	0x000002);
	mid = AddStrucMember(id,"Throw",						0X34,	0x25500400,	0XFFFFFFFF,	4,	0XFFFFFFFF,	0,	0x000002);
	mid = AddStrucMember(id,"ThrowNew",						0X38,	0x25500400,	0XFFFFFFFF,	4,	0XFFFFFFFF,	0,	0x000002);
	mid = AddStrucMember(id,"ExceptionOccurred",			0X3C,	0x25500400,	0XFFFFFFFF,	4,	0XFFFFFFFF,	0,	0x000002);
	mid = AddStrucMember(id,"ExceptionDescribe",			0X40,	0x25500400,	0XFFFFFFFF,	4,	0XFFFFFFFF,	0,	0x000002);
	mid = AddStrucMember(id,"ExceptionClear",				0X44,	0x25500400,	0XFFFFFFFF,	4,	0XFFFFFFFF,	0,	0x000002);
	mid = AddStrucMember(id,"FatalError",					0X48,	0x25500400,	0XFFFFFFFF,	4,	0XFFFFFFFF,	0,	0x000002);
	mid = AddStrucMember(id,"PushLocalFrame",				0X4C,	0x25500400,	0XFFFFFFFF,	4,	0XFFFFFFFF,	0,	0x000002);
	mid = AddStrucMember(id,"PopLocalFrame",				0X50,	0x25500400,	0XFFFFFFFF,	4,	0XFFFFFFFF,	0,	0x000002);
	mid = AddStrucMember(id,"NewGlobalRef",					0X54,	0x25500400,	0XFFFFFFFF,	4,	0XFFFFFFFF,	0,	0x000002);
	mid = AddStrucMember(id,"DeleteGlobalRef",				0X58,	0x25500400,	0XFFFFFFFF,	4,	0XFFFFFFFF,	0,	0x000002);
	mid = AddStrucMember(id,"DeleteLocalRef",				0X5C,	0x25500400,	0XFFFFFFFF,	4,	0XFFFFFFFF,	0,	0x000002);
	mid = AddStrucMember(id,"IsSameObject",					0X60,	0x25500400,	0XFFFFFFFF,	4,	0XFFFFFFFF,	0,	0x000002);
	mid = AddStrucMember(id,"NewLocalRef",					0X64,	0x25500400,	0XFFFFFFFF,	4,	0XFFFFFFFF,	0,	0x000002);
	mid = AddStrucMember(id,"EnsureLocalCapacity",			0X68,	0x25500400,	0XFFFFFFFF,	4,	0XFFFFFFFF,	0,	0x000002);
	mid = AddStrucMember(id,"AllocObject",					0X6C,	0x25500400,	0XFFFFFFFF,	4,	0XFFFFFFFF,	0,	0x000002);
	mid = AddStrucMember(id,"NewObject",					0X70,	0x25500400,	0XFFFFFFFF,	4,	0XFFFFFFFF,	0,	0x000002);
	mid = AddStrucMember(id,"NewObjectV",					0X74,	0x25500400,	0XFFFFFFFF,	4,	0XFFFFFFFF,	0,	0x000002);
	mid = AddStrucMember(id,"NewObjectA",					0X78,	0x25500400,	0XFFFFFFFF,	4,	0XFFFFFFFF,	0,	0x000002);
	mid = AddStrucMember(id,"GetObjectClass",				0X7C,	0x25500400,	0XFFFFFFFF,	4,	0XFFFFFFFF,	0,	0x000002);
	mid = AddStrucMember(id,"IsInstanceOf",					0X80,	0x25500400,	0XFFFFFFFF,	4,	0XFFFFFFFF,	0,	0x000002);
	mid = AddStrucMember(id,"GetMethodID",					0X84,	0x25500400,	0XFFFFFFFF,	4,	0XFFFFFFFF,	0,	0x000002);
	mid = AddStrucMember(id,"CallObjectMethod",				0X88,	0x25500400,	0XFFFFFFFF,	4,	0XFFFFFFFF,	0,	0x000002);
	mid = AddStrucMember(id,"CallObjectMethodV",			0X8C,	0x25500400,	0XFFFFFFFF,	4,	0XFFFFFFFF,	0,	0x000002);
	mid = AddStrucMember(id,"CallObjectMethodA",			0X90,	0x25500400,	0XFFFFFFFF,	4,	0XFFFFFFFF,	0,	0x000002);
	mid = AddStrucMember(id,"CallBooleanMethod",			0X94,	0x25500400,	0XFFFFFFFF,	4,	0XFFFFFFFF,	0,	0x000002);
	mid = AddStrucMember(id,"CallBooleanMethodV",			0X98,	0x25500400,	0XFFFFFFFF,	4,	0XFFFFFFFF,	0,	0x000002);
	mid = AddStrucMember(id,"CallBooleanMethodA",			0X9C,	0x25500400,	0XFFFFFFFF,	4,	0XFFFFFFFF,	0,	0x000002);
	mid = AddStrucMember(id,"CallByteMethod",				0XA0,	0x25500400,	0XFFFFFFFF,	4,	0XFFFFFFFF,	0,	0x000002);
	mid = AddStrucMember(id,"CallByteMethodV",				0XA4,	0x25500400,	0XFFFFFFFF,	4,	0XFFFFFFFF,	0,	0x000002);
	mid = AddStrucMember(id,"CallByteMethodA",				0XA8,	0x25500400,	0XFFFFFFFF,	4,	0XFFFFFFFF,	0,	0x000002);
	mid = AddStrucMember(id,"CallCharMethod",				0XAC,	0x25500400,	0XFFFFFFFF,	4,	0XFFFFFFFF,	0,	0x000002);
	mid = AddStrucMember(id,"CallCharMethodV",				0XB0,	0x25500400,	0XFFFFFFFF,	4,	0XFFFFFFFF,	0,	0x000002);
	mid = AddStrucMember(id,"CallCharMethodA",				0XB4,	0x25500400,	0XFFFFFFFF,	4,	0XFFFFFFFF,	0,	0x000002);
	mid = AddStrucMember(id,"CallShortMethod",				0XB8,	0x25500400,	0XFFFFFFFF,	4,	0XFFFFFFFF,	0,	0x000002);
	mid = AddStrucMember(id,"CallShortMethodV",				0XBC,	0x25500400,	0XFFFFFFFF,	4,	0XFFFFFFFF,	0,	0x000002);
	mid = AddStrucMember(id,"CallShortMethodA",				0XC0,	0x25500400,	0XFFFFFFFF,	4,	0XFFFFFFFF,	0,	0x000002);
	mid = AddStrucMember(id,"CallIntMethod",				0XC4,	0x25500400,	0XFFFFFFFF,	4,	0XFFFFFFFF,	0,	0x000002);
	mid = AddStrucMember(id,"CallIntMethodV",				0XC8,	0x25500400,	0XFFFFFFFF,	4,	0XFFFFFFFF,	0,	0x000002);
	mid = AddStrucMember(id,"CallIntMethodA",				0XCC,	0x25500400,	0XFFFFFFFF,	4,	0XFFFFFFFF,	0,	0x000002);
	mid = AddStrucMember(id,"CallLongMethod",				0XD0,	0x25500400,	0XFFFFFFFF,	4,	0XFFFFFFFF,	0,	0x000002);
	mid = AddStrucMember(id,"CallLongMethodV",				0XD4,	0x25500400,	0XFFFFFFFF,	4,	0XFFFFFFFF,	0,	0x000002);
	mid = AddStrucMember(id,"CallLongMethodA",				0XD8,	0x25500400,	0XFFFFFFFF,	4,	0XFFFFFFFF,	0,	0x000002);
	mid = AddStrucMember(id,"CallFloatMethod",				0XDC,	0x25500400,	0XFFFFFFFF,	4,	0XFFFFFFFF,	0,	0x000002);
	mid = AddStrucMember(id,"CallFloatMethodV",				0XE0,	0x25500400,	0XFFFFFFFF,	4,	0XFFFFFFFF,	0,	0x000002);
	mid = AddStrucMember(id,"CallFloatMethodA",				0XE4,	0x25500400,	0XFFFFFFFF,	4,	0XFFFFFFFF,	0,	0x000002);
	mid = AddStrucMember(id,"CallDoubleMethod",				0XE8,	0x25500400,	0XFFFFFFFF,	4,	0XFFFFFFFF,	0,	0x000002);
	mid = AddStrucMember(id,"CallDoubleMethodV",			0XEC,	0x25500400,	0XFFFFFFFF,	4,	0XFFFFFFFF,	0,	0x000002);
	mid = AddStrucMember(id,"CallDoubleMethodA",			0XF0,	0x25500400,	0XFFFFFFFF,	4,	0XFFFFFFFF,	0,	0x000002);
	mid = AddStrucMember(id,"CallVoidMethod",				0XF4,	0x25500400,	0XFFFFFFFF,	4,	0XFFFFFFFF,	0,	0x000002);
	mid = AddStrucMember(id,"CallVoidMethodV",				0XF8,	0x25500400,	0XFFFFFFFF,	4,	0XFFFFFFFF,	0,	0x000002);
	mid = AddStrucMember(id,"CallVoidMethodA",				0XFC,	0x25500400,	0XFFFFFFFF,	4,	0XFFFFFFFF,	0,	0x000002);
	mid = AddStrucMember(id,"CallNonvirtualObjectMethod",	0X100,	0x25500400,	0XFFFFFFFF,	4,	0XFFFFFFFF,	0,	0x000002);
	mid = AddStrucMember(id,"CallNonvirtualObjectMethodV",	0X104,	0x25500400,	0XFFFFFFFF,	4,	0XFFFFFFFF,	0,	0x000002);
	mid = AddStrucMember(id,"CallNonvirtualObjectMethodA",	0X108,	0x25500400,	0XFFFFFFFF,	4,	0XFFFFFFFF,	0,	0x000002);
	mid = AddStrucMember(id,"CallNonvirtualBooleanMethod",	0X10C,	0x25500400,	0XFFFFFFFF,	4,	0XFFFFFFFF,	0,	0x000002);
	mid = AddStrucMember(id,"CallNonvirtualBooleanMethodV",	0X110,	0x25500400,	0XFFFFFFFF,	4,	0XFFFFFFFF,	0,	0x000002);
	mid = AddStrucMember(id,"CallNonvirtualBooleanMethodA",	0X114,	0x25500400,	0XFFFFFFFF,	4,	0XFFFFFFFF,	0,	0x000002);
	mid = AddStrucMember(id,"CallNonvirtualByteMethod",		0X118,	0x25500400,	0XFFFFFFFF,	4,	0XFFFFFFFF,	0,	0x000002);
	mid = AddStrucMember(id,"CallNonvirtualByteMethodV",	0X11C,	0x25500400,	0XFFFFFFFF,	4,	0XFFFFFFFF,	0,	0x000002);
	mid = AddStrucMember(id,"CallNonvirtualByteMethodA",	0X120,	0x25500400,	0XFFFFFFFF,	4,	0XFFFFFFFF,	0,	0x000002);
	mid = AddStrucMember(id,"CallNonvirtualCharMethod",		0X124,	0x25500400,	0XFFFFFFFF,	4,	0XFFFFFFFF,	0,	0x000002);
	mid = AddStrucMember(id,"CallNonvirtualCharMethodV",	0X128,	0x25500400,	0XFFFFFFFF,	4,	0XFFFFFFFF,	0,	0x000002);
	mid = AddStrucMember(id,"CallNonvirtualCharMethodA",	0X12C,	0x25500400,	0XFFFFFFFF,	4,	0XFFFFFFFF,	0,	0x000002);
	mid = AddStrucMember(id,"CallNonvirtualShortMethod",	0X130,	0x25500400,	0XFFFFFFFF,	4,	0XFFFFFFFF,	0,	0x000002);
	mid = AddStrucMember(id,"CallNonvirtualShortMethodV",	0X134,	0x25500400,	0XFFFFFFFF,	4,	0XFFFFFFFF,	0,	0x000002);
	mid = AddStrucMember(id,"CallNonvirtualShortMethodA",	0X138,	0x25500400,	0XFFFFFFFF,	4,	0XFFFFFFFF,	0,	0x000002);
	mid = AddStrucMember(id,"CallNonvirtualIntMethod",		0X13C,	0x25500400,	0XFFFFFFFF,	4,	0XFFFFFFFF,	0,	0x000002);
	mid = AddStrucMember(id,"CallNonvirtualIntMethodV",		0X140,	0x25500400,	0XFFFFFFFF,	4,	0XFFFFFFFF,	0,	0x000002);
	mid = AddStrucMember(id,"CallNonvirtualIntMethodA",		0X144,	0x25500400,	0XFFFFFFFF,	4,	0XFFFFFFFF,	0,	0x000002);
	mid = AddStrucMember(id,"CallNonvirtualLongMethod",		0X148,	0x25500400,	0XFFFFFFFF,	4,	0XFFFFFFFF,	0,	0x000002);
	mid = AddStrucMember(id,"CallNonvirtualLongMethodV",	0X14C,	0x25500400,	0XFFFFFFFF,	4,	0XFFFFFFFF,	0,	0x000002);
	mid = AddStrucMember(id,"CallNonvirtualLongMethodA",	0X150,	0x25500400,	0XFFFFFFFF,	4,	0XFFFFFFFF,	0,	0x000002);
	mid = AddStrucMember(id,"CallNonvirtualFloatMethod",	0X154,	0x25500400,	0XFFFFFFFF,	4,	0XFFFFFFFF,	0,	0x000002);
	mid = AddStrucMember(id,"CallNonvirtualFloatMethodV",	0X158,	0x25500400,	0XFFFFFFFF,	4,	0XFFFFFFFF,	0,	0x000002);
	mid = AddStrucMember(id,"CallNonvirtualFloatMethodA",	0X15C,	0x25500400,	0XFFFFFFFF,	4,	0XFFFFFFFF,	0,	0x000002);
	mid = AddStrucMember(id,"CallNonvirtualDoubleMethod",	0X160,	0x25500400,	0XFFFFFFFF,	4,	0XFFFFFFFF,	0,	0x000002);
	mid = AddStrucMember(id,"CallNonvirtualDoubleMethodV",	0X164,	0x25500400,	0XFFFFFFFF,	4,	0XFFFFFFFF,	0,	0x000002);
	mid = AddStrucMember(id,"CallNonvirtualDoubleMethodA",	0X168,	0x25500400,	0XFFFFFFFF,	4,	0XFFFFFFFF,	0,	0x000002);
	mid = AddStrucMember(id,"CallNonvirtualVoidMethod",		0X16C,	0x25500400,	0XFFFFFFFF,	4,	0XFFFFFFFF,	0,	0x000002);
	mid = AddStrucMember(id,"CallNonvirtualVoidMethodV",	0X170,	0x25500400,	0XFFFFFFFF,	4,	0XFFFFFFFF,	0,	0x000002);
	mid = AddStrucMember(id,"CallNonvirtualVoidMethodA",	0X174,	0x25500400,	0XFFFFFFFF,	4,	0XFFFFFFFF,	0,	0x000002);
	mid = AddStrucMember(id,"GetFieldID",					0X178,	0x25500400,	0XFFFFFFFF,	4,	0XFFFFFFFF,	0,	0x000002);
	mid = AddStrucMember(id,"GetObjectField",				0X17C,	0x25500400,	0XFFFFFFFF,	4,	0XFFFFFFFF,	0,	0x000002);
	mid = AddStrucMember(id,"GetBooleanField",				0X180,	0x25500400,	0XFFFFFFFF,	4,	0XFFFFFFFF,	0,	0x000002);
	mid = AddStrucMember(id,"GetByteField",					0X184,	0x25500400,	0XFFFFFFFF,	4,	0XFFFFFFFF,	0,	0x000002);
	mid = AddStrucMember(id,"GetCharField",					0X188,	0x25500400,	0XFFFFFFFF,	4,	0XFFFFFFFF,	0,	0x000002);
	mid = AddStrucMember(id,"GetShortField",				0X18C,	0x25500400,	0XFFFFFFFF,	4,	0XFFFFFFFF,	0,	0x000002);
	mid = AddStrucMember(id,"GetIntField",					0X190,	0x25500400,	0XFFFFFFFF,	4,	0XFFFFFFFF,	0,	0x000002);
	mid = AddStrucMember(id,"GetLongField",					0X194,	0x25500400,	0XFFFFFFFF,	4,	0XFFFFFFFF,	0,	0x000002);
	mid = AddStrucMember(id,"GetFloatField",				0X198,	0x25500400,	0XFFFFFFFF,	4,	0XFFFFFFFF,	0,	0x000002);
	mid = AddStrucMember(id,"GetDoubleField",				0X19C,	0x25500400,	0XFFFFFFFF,	4,	0XFFFFFFFF,	0,	0x000002);
	mid = AddStrucMember(id,"SetObjectField",				0X1A0,	0x25500400,	0XFFFFFFFF,	4,	0XFFFFFFFF,	0,	0x000002);
	mid = AddStrucMember(id,"SetBooleanField",				0X1A4,	0x25500400,	0XFFFFFFFF,	4,	0XFFFFFFFF,	0,	0x000002);
	mid = AddStrucMember(id,"SetByteField",					0X1A8,	0x25500400,	0XFFFFFFFF,	4,	0XFFFFFFFF,	0,	0x000002);
	mid = AddStrucMember(id,"SetCharField",					0X1AC,	0x25500400,	0XFFFFFFFF,	4,	0XFFFFFFFF,	0,	0x000002);
	mid = AddStrucMember(id,"SetShortField",				0X1B0,	0x25500400,	0XFFFFFFFF,	4,	0XFFFFFFFF,	0,	0x000002);
	mid = AddStrucMember(id,"SetIntField",					0X1B4,	0x25500400,	0XFFFFFFFF,	4,	0XFFFFFFFF,	0,	0x000002);
	mid = AddStrucMember(id,"SetLongField",					0X1B8,	0x25500400,	0XFFFFFFFF,	4,	0XFFFFFFFF,	0,	0x000002);
	mid = AddStrucMember(id,"SetFloatField",				0X1BC,	0x25500400,	0XFFFFFFFF,	4,	0XFFFFFFFF,	0,	0x000002);
	mid = AddStrucMember(id,"SetDoubleField",				0X1C0,	0x25500400,	0XFFFFFFFF,	4,	0XFFFFFFFF,	0,	0x000002);
	mid = AddStrucMember(id,"GetStaticMethodID",			0X1C4,	0x25500400,	0XFFFFFFFF,	4,	0XFFFFFFFF,	0,	0x000002);
	mid = AddStrucMember(id,"CallStaticObjectMethod",		0X1C8,	0x25500400,	0XFFFFFFFF,	4,	0XFFFFFFFF,	0,	0x000002);
	mid = AddStrucMember(id,"CallStaticObjectMethodV",		0X1CC,	0x25500400,	0XFFFFFFFF,	4,	0XFFFFFFFF,	0,	0x000002);
	mid = AddStrucMember(id,"CallStaticObjectMethodA",		0X1D0,	0x25500400,	0XFFFFFFFF,	4,	0XFFFFFFFF,	0,	0x000002);
	mid = AddStrucMember(id,"CallStaticBooleanMethod",		0X1D4,	0x25500400,	0XFFFFFFFF,	4,	0XFFFFFFFF,	0,	0x000002);
	mid = AddStrucMember(id,"CallStaticBooleanMethodV",		0X1D8,	0x25500400,	0XFFFFFFFF,	4,	0XFFFFFFFF,	0,	0x000002);
	mid = AddStrucMember(id,"CallStaticBooleanMethodA",		0X1DC,	0x25500400,	0XFFFFFFFF,	4,	0XFFFFFFFF,	0,	0x000002);
	mid = AddStrucMember(id,"CallStaticByteMethod",			0X1E0,	0x25500400,	0XFFFFFFFF,	4,	0XFFFFFFFF,	0,	0x000002);
	mid = AddStrucMember(id,"CallStaticByteMethodV",		0X1E4,	0x25500400,	0XFFFFFFFF,	4,	0XFFFFFFFF,	0,	0x000002);
	mid = AddStrucMember(id,"CallStaticByteMethodA",		0X1E8,	0x25500400,	0XFFFFFFFF,	4,	0XFFFFFFFF,	0,	0x000002);
	mid = AddStrucMember(id,"CallStaticCharMethod",			0X1EC,	0x25500400,	0XFFFFFFFF,	4,	0XFFFFFFFF,	0,	0x000002);
	mid = AddStrucMember(id,"CallStaticCharMethodV",		0X1F0,	0x25500400,	0XFFFFFFFF,	4,	0XFFFFFFFF,	0,	0x000002);
	mid = AddStrucMember(id,"CallStaticCharMethodA",		0X1F4,	0x25500400,	0XFFFFFFFF,	4,	0XFFFFFFFF,	0,	0x000002);
	mid = AddStrucMember(id,"CallStaticShortMethod",		0X1F8,	0x25500400,	0XFFFFFFFF,	4,	0XFFFFFFFF,	0,	0x000002);
	mid = AddStrucMember(id,"CallStaticShortMethodV",		0X1FC,	0x25500400,	0XFFFFFFFF,	4,	0XFFFFFFFF,	0,	0x000002);
	mid = AddStrucMember(id,"CallStaticShortMethodA",		0X200,	0x25500400,	0XFFFFFFFF,	4,	0XFFFFFFFF,	0,	0x000002);
	mid = AddStrucMember(id,"CallStaticIntMethod",			0X204,	0x25500400,	0XFFFFFFFF,	4,	0XFFFFFFFF,	0,	0x000002);
	mid = AddStrucMember(id,"CallStaticIntMethodV",			0X208,	0x25500400,	0XFFFFFFFF,	4,	0XFFFFFFFF,	0,	0x000002);
	mid = AddStrucMember(id,"CallStaticIntMethodA",			0X20C,	0x25500400,	0XFFFFFFFF,	4,	0XFFFFFFFF,	0,	0x000002);
	mid = AddStrucMember(id,"CallStaticLongMethod",			0X210,	0x25500400,	0XFFFFFFFF,	4,	0XFFFFFFFF,	0,	0x000002);
	mid = AddStrucMember(id,"CallStaticLongMethodV",		0X214,	0x25500400,	0XFFFFFFFF,	4,	0XFFFFFFFF,	0,	0x000002);
	mid = AddStrucMember(id,"CallStaticLongMethodA",		0X218,	0x25500400,	0XFFFFFFFF,	4,	0XFFFFFFFF,	0,	0x000002);
	mid = AddStrucMember(id,"CallStaticFloatMethod",		0X21C,	0x25500400,	0XFFFFFFFF,	4,	0XFFFFFFFF,	0,	0x000002);
	mid = AddStrucMember(id,"CallStaticFloatMethodV",		0X220,	0x25500400,	0XFFFFFFFF,	4,	0XFFFFFFFF,	0,	0x000002);
	mid = AddStrucMember(id,"CallStaticFloatMethodA",		0X224,	0x25500400,	0XFFFFFFFF,	4,	0XFFFFFFFF,	0,	0x000002);
	mid = AddStrucMember(id,"CallStaticDoubleMethod",		0X228,	0x25500400,	0XFFFFFFFF,	4,	0XFFFFFFFF,	0,	0x000002);
	mid = AddStrucMember(id,"CallStaticDoubleMethodV",		0X22C,	0x25500400,	0XFFFFFFFF,	4,	0XFFFFFFFF,	0,	0x000002);
	mid = AddStrucMember(id,"CallStaticDoubleMethodA",		0X230,	0x25500400,	0XFFFFFFFF,	4,	0XFFFFFFFF,	0,	0x000002);
	mid = AddStrucMember(id,"CallStaticVoidMethod",			0X234,	0x25500400,	0XFFFFFFFF,	4,	0XFFFFFFFF,	0,	0x000002);
	mid = AddStrucMember(id,"CallStaticVoidMethodV",		0X238,	0x25500400,	0XFFFFFFFF,	4,	0XFFFFFFFF,	0,	0x000002);
	mid = AddStrucMember(id,"CallStaticVoidMethodA",		0X23C,	0x25500400,	0XFFFFFFFF,	4,	0XFFFFFFFF,	0,	0x000002);
	mid = AddStrucMember(id,"GetStaticFieldID",				0X240,	0x25500400,	0XFFFFFFFF,	4,	0XFFFFFFFF,	0,	0x000002);
	mid = AddStrucMember(id,"GetStaticObjectField",			0X244,	0x25500400,	0XFFFFFFFF,	4,	0XFFFFFFFF,	0,	0x000002);
	mid = AddStrucMember(id,"GetStaticBooleanField",		0X248,	0x25500400,	0XFFFFFFFF,	4,	0XFFFFFFFF,	0,	0x000002);
	mid = AddStrucMember(id,"GetStaticByteField",			0X24C,	0x25500400,	0XFFFFFFFF,	4,	0XFFFFFFFF,	0,	0x000002);
	mid = AddStrucMember(id,"GetStaticCharField",			0X250,	0x25500400,	0XFFFFFFFF,	4,	0XFFFFFFFF,	0,	0x000002);
	mid = AddStrucMember(id,"GetStaticShortField",			0X254,	0x25500400,	0XFFFFFFFF,	4,	0XFFFFFFFF,	0,	0x000002);
	mid = AddStrucMember(id,"GetStaticIntField",			0X258,	0x25500400,	0XFFFFFFFF,	4,	0XFFFFFFFF,	0,	0x000002);
	mid = AddStrucMember(id,"GetStaticLongField",			0X25C,	0x25500400,	0XFFFFFFFF,	4,	0XFFFFFFFF,	0,	0x000002);
	mid = AddStrucMember(id,"GetStaticFloatField",			0X260,	0x25500400,	0XFFFFFFFF,	4,	0XFFFFFFFF,	0,	0x000002);
	mid = AddStrucMember(id,"GetStaticDoubleField",			0X264,	0x25500400,	0XFFFFFFFF,	4,	0XFFFFFFFF,	0,	0x000002);
	mid = AddStrucMember(id,"SetStaticObjectField",			0X268,	0x25500400,	0XFFFFFFFF,	4,	0XFFFFFFFF,	0,	0x000002);
	mid = AddStrucMember(id,"SetStaticBooleanField",		0X26C,	0x25500400,	0XFFFFFFFF,	4,	0XFFFFFFFF,	0,	0x000002);
	mid = AddStrucMember(id,"SetStaticByteField",			0X270,	0x25500400,	0XFFFFFFFF,	4,	0XFFFFFFFF,	0,	0x000002);
	mid = AddStrucMember(id,"SetStaticCharField",			0X274,	0x25500400,	0XFFFFFFFF,	4,	0XFFFFFFFF,	0,	0x000002);
	mid = AddStrucMember(id,"SetStaticShortField",			0X278,	0x25500400,	0XFFFFFFFF,	4,	0XFFFFFFFF,	0,	0x000002);
	mid = AddStrucMember(id,"SetStaticIntField",			0X27C,	0x25500400,	0XFFFFFFFF,	4,	0XFFFFFFFF,	0,	0x000002);
	mid = AddStrucMember(id,"SetStaticLongField",			0X280,	0x25500400,	0XFFFFFFFF,	4,	0XFFFFFFFF,	0,	0x000002);
	mid = AddStrucMember(id,"SetStaticFloatField",			0X284,	0x25500400,	0XFFFFFFFF,	4,	0XFFFFFFFF,	0,	0x000002);
	mid = AddStrucMember(id,"SetStaticDoubleField",			0X288,	0x25500400,	0XFFFFFFFF,	4,	0XFFFFFFFF,	0,	0x000002);
	mid = AddStrucMember(id,"NewString",					0X28C,	0x25500400,	0XFFFFFFFF,	4,	0XFFFFFFFF,	0,	0x000002);
	mid = AddStrucMember(id,"GetStringLength",				0X290,	0x25500400,	0XFFFFFFFF,	4,	0XFFFFFFFF,	0,	0x000002);
	mid = AddStrucMember(id,"GetStringChars",				0X294,	0x25500400,	0XFFFFFFFF,	4,	0XFFFFFFFF,	0,	0x000002);
	mid = AddStrucMember(id,"ReleaseStringChars",			0X298,	0x25500400,	0XFFFFFFFF,	4,	0XFFFFFFFF,	0,	0x000002);
	mid = AddStrucMember(id,"NewStringUTF",					0X29C,	0x25500400,	0XFFFFFFFF,	4,	0XFFFFFFFF,	0,	0x000002);
	mid = AddStrucMember(id,"GetStringUTFLength",			0X2A0,	0x25500400,	0XFFFFFFFF,	4,	0XFFFFFFFF,	0,	0x000002);
	mid = AddStrucMember(id,"GetStringUTFChars",			0X2A4,	0x25500400,	0XFFFFFFFF,	4,	0XFFFFFFFF,	0,	0x000002);
	mid = AddStrucMember(id,"ReleaseStringUTFChars",		0X2A8,	0x25500400,	0XFFFFFFFF,	4,	0XFFFFFFFF,	0,	0x000002);
	mid = AddStrucMember(id,"GetArrayLength",				0X2AC,	0x25500400,	0XFFFFFFFF,	4,	0XFFFFFFFF,	0,	0x000002);
	mid = AddStrucMember(id,"NewObjectArray",				0X2B0,	0x25500400,	0XFFFFFFFF,	4,	0XFFFFFFFF,	0,	0x000002);
	mid = AddStrucMember(id,"GetObjectArrayElement",		0X2B4,	0x25500400,	0XFFFFFFFF,	4,	0XFFFFFFFF,	0,	0x000002);
	mid = AddStrucMember(id,"SetObjectArrayElement",		0X2B8,	0x25500400,	0XFFFFFFFF,	4,	0XFFFFFFFF,	0,	0x000002);
	mid = AddStrucMember(id,"NewBooleanArray",				0X2BC,	0x25500400,	0XFFFFFFFF,	4,	0XFFFFFFFF,	0,	0x000002);
	mid = AddStrucMember(id,"NewByteArray",					0X2C0,	0x25500400,	0XFFFFFFFF,	4,	0XFFFFFFFF,	0,	0x000002);
	mid = AddStrucMember(id,"NewCharArray",					0X2C4,	0x25500400,	0XFFFFFFFF,	4,	0XFFFFFFFF,	0,	0x000002);
	mid = AddStrucMember(id,"NewShortArray",				0X2C8,	0x25500400,	0XFFFFFFFF,	4,	0XFFFFFFFF,	0,	0x000002);
	mid = AddStrucMember(id,"NewIntArray",					0X2CC,	0x25500400,	0XFFFFFFFF,	4,	0XFFFFFFFF,	0,	0x000002);
	mid = AddStrucMember(id,"NewLongArray",					0X2D0,	0x25500400,	0XFFFFFFFF,	4,	0XFFFFFFFF,	0,	0x000002);
	mid = AddStrucMember(id,"NewFloatArray",				0X2D4,	0x25500400,	0XFFFFFFFF,	4,	0XFFFFFFFF,	0,	0x000002);
	mid = AddStrucMember(id,"NewDoubleArray",				0X2D8,	0x25500400,	0XFFFFFFFF,	4,	0XFFFFFFFF,	0,	0x000002);
	mid = AddStrucMember(id,"GetBooleanArrayElements",		0X2DC,	0x25500400,	0XFFFFFFFF,	4,	0XFFFFFFFF,	0,	0x000002);
	mid = AddStrucMember(id,"GetByteArrayElements",			0X2E0,	0x25500400,	0XFFFFFFFF,	4,	0XFFFFFFFF,	0,	0x000002);
	mid = AddStrucMember(id,"GetCharArrayElements",			0X2E4,	0x25500400,	0XFFFFFFFF,	4,	0XFFFFFFFF,	0,	0x000002);
	mid = AddStrucMember(id,"GetShortArrayElements",		0X2E8,	0x25500400,	0XFFFFFFFF,	4,	0XFFFFFFFF,	0,	0x000002);
	mid = AddStrucMember(id,"GetIntArrayElements",			0X2EC,	0x25500400,	0XFFFFFFFF,	4,	0XFFFFFFFF,	0,	0x000002);
	mid = AddStrucMember(id,"GetLongArrayElements",			0X2F0,	0x25500400,	0XFFFFFFFF,	4,	0XFFFFFFFF,	0,	0x000002);
	mid = AddStrucMember(id,"GetFloatArrayElements",		0X2F4,	0x25500400,	0XFFFFFFFF,	4,	0XFFFFFFFF,	0,	0x000002);
	mid = AddStrucMember(id,"GetDoubleArrayElements",		0X2F8,	0x25500400,	0XFFFFFFFF,	4,	0XFFFFFFFF,	0,	0x000002);
	mid = AddStrucMember(id,"ReleaseBooleanArrayElements",	0X2FC,	0x25500400,	0XFFFFFFFF,	4,	0XFFFFFFFF,	0,	0x000002);
	mid = AddStrucMember(id,"ReleaseByteArrayElements",		0X300,	0x25500400,	0XFFFFFFFF,	4,	0XFFFFFFFF,	0,	0x000002);
	mid = AddStrucMember(id,"ReleaseCharArrayElements",		0X304,	0x25500400,	0XFFFFFFFF,	4,	0XFFFFFFFF,	0,	0x000002);
	mid = AddStrucMember(id,"ReleaseShortArrayElements",	0X308,	0x25500400,	0XFFFFFFFF,	4,	0XFFFFFFFF,	0,	0x000002);
	mid = AddStrucMember(id,"ReleaseIntArrayElements",		0X30C,	0x25500400,	0XFFFFFFFF,	4,	0XFFFFFFFF,	0,	0x000002);
	mid = AddStrucMember(id,"ReleaseLongArrayElements",		0X310,	0x25500400,	0XFFFFFFFF,	4,	0XFFFFFFFF,	0,	0x000002);
	mid = AddStrucMember(id,"ReleaseFloatArrayElements",	0X314,	0x25500400,	0XFFFFFFFF,	4,	0XFFFFFFFF,	0,	0x000002);
	mid = AddStrucMember(id,"ReleaseDoubleArrayElements",	0X318,	0x25500400,	0XFFFFFFFF,	4,	0XFFFFFFFF,	0,	0x000002);
	mid = AddStrucMember(id,"GetBooleanArrayRegion",		0X31C,	0x25500400,	0XFFFFFFFF,	4,	0XFFFFFFFF,	0,	0x000002);
	mid = AddStrucMember(id,"GetByteArrayRegion",			0X320,	0x25500400,	0XFFFFFFFF,	4,	0XFFFFFFFF,	0,	0x000002);
	mid = AddStrucMember(id,"GetCharArrayRegion",			0X324,	0x25500400,	0XFFFFFFFF,	4,	0XFFFFFFFF,	0,	0x000002);
	mid = AddStrucMember(id,"GetShortArrayRegion",			0X328,	0x25500400,	0XFFFFFFFF,	4,	0XFFFFFFFF,	0,	0x000002);
	mid = AddStrucMember(id,"GetIntArrayRegion",			0X32C,	0x25500400,	0XFFFFFFFF,	4,	0XFFFFFFFF,	0,	0x000002);
	mid = AddStrucMember(id,"GetLongArrayRegion",			0X330,	0x25500400,	0XFFFFFFFF,	4,	0XFFFFFFFF,	0,	0x000002);
	mid = AddStrucMember(id,"GetFloatArrayRegion",			0X334,	0x25500400,	0XFFFFFFFF,	4,	0XFFFFFFFF,	0,	0x000002);
	mid = AddStrucMember(id,"GetDoubleArrayRegion",			0X338,	0x25500400,	0XFFFFFFFF,	4,	0XFFFFFFFF,	0,	0x000002);
	mid = AddStrucMember(id,"SetBooleanArrayRegion",		0X33C,	0x25500400,	0XFFFFFFFF,	4,	0XFFFFFFFF,	0,	0x000002);
	mid = AddStrucMember(id,"SetByteArrayRegion",			0X340,	0x25500400,	0XFFFFFFFF,	4,	0XFFFFFFFF,	0,	0x000002);
	mid = AddStrucMember(id,"SetCharArrayRegion",			0X344,	0x25500400,	0XFFFFFFFF,	4,	0XFFFFFFFF,	0,	0x000002);
	mid = AddStrucMember(id,"SetShortArrayRegion",			0X348,	0x25500400,	0XFFFFFFFF,	4,	0XFFFFFFFF,	0,	0x000002);
	mid = AddStrucMember(id,"SetIntArrayRegion",			0X34C,	0x25500400,	0XFFFFFFFF,	4,	0XFFFFFFFF,	0,	0x000002);
	mid = AddStrucMember(id,"SetLongArrayRegion",			0X350,	0x25500400,	0XFFFFFFFF,	4,	0XFFFFFFFF,	0,	0x000002);
	mid = AddStrucMember(id,"SetFloatArrayRegion",			0X354,	0x25500400,	0XFFFFFFFF,	4,	0XFFFFFFFF,	0,	0x000002);
	mid = AddStrucMember(id,"SetDoubleArrayRegion",			0X358,	0x25500400,	0XFFFFFFFF,	4,	0XFFFFFFFF,	0,	0x000002);
	mid = AddStrucMember(id,"RegisterNatives",				0X35C,	0x25500400,	0XFFFFFFFF,	4,	0XFFFFFFFF,	0,	0x000002);
	mid = AddStrucMember(id,"UnregisterNatives",			0X360,	0x25500400,	0XFFFFFFFF,	4,	0XFFFFFFFF,	0,	0x000002);
	mid = AddStrucMember(id,"MonitorEnter",					0X364,	0x25500400,	0XFFFFFFFF,	4,	0XFFFFFFFF,	0,	0x000002);
	mid = AddStrucMember(id,"MonitorExit",					0X368,	0x25500400,	0XFFFFFFFF,	4,	0XFFFFFFFF,	0,	0x000002);
	mid = AddStrucMember(id,"GetJavaVM",					0X36C,	0x25500400,	0XFFFFFFFF,	4,	0XFFFFFFFF,	0,	0x000002);
	mid = AddStrucMember(id,"GetStringRegion",				0X370,	0x25500400,	0XFFFFFFFF,	4,	0XFFFFFFFF,	0,	0x000002);
	mid = AddStrucMember(id,"GetStringUTFRegion",			0X374,	0x25500400,	0XFFFFFFFF,	4,	0XFFFFFFFF,	0,	0x000002);
	mid = AddStrucMember(id,"GetPrimitiveArrayCritical",	0X378,	0x25500400,	0XFFFFFFFF,	4,	0XFFFFFFFF,	0,	0x000002);
	mid = AddStrucMember(id,"ReleasePrimitiveArrayCritical",0X37C,	0x25500400,	0XFFFFFFFF,	4,	0XFFFFFFFF,	0,	0x000002);
	mid = AddStrucMember(id,"GetStringCritical",			0X380,	0x25500400,	0XFFFFFFFF,	4,	0XFFFFFFFF,	0,	0x000002);
	mid = AddStrucMember(id,"ReleaseStringCritical",		0X384,	0x25500400,	0XFFFFFFFF,	4,	0XFFFFFFFF,	0,	0x000002);
	mid = AddStrucMember(id,"NewWeakGlobalRef",				0X388,	0x25500400,	0XFFFFFFFF,	4,	0XFFFFFFFF,	0,	0x000002);
	mid = AddStrucMember(id,"DeleteWeakGlobalRef",			0X38C,	0x25500400,	0XFFFFFFFF,	4,	0XFFFFFFFF,	0,	0x000002);
	mid = AddStrucMember(id,"ExceptionCheck",				0X390,	0x25500400,	0XFFFFFFFF,	4,	0XFFFFFFFF,	0,	0x000002);
	mid = AddStrucMember(id,"NewDirectByteBuffer",			0X394,	0x25500400,	0XFFFFFFFF,	4,	0XFFFFFFFF,	0,	0x000002);
	mid = AddStrucMember(id,"GetDirectBufferAddress",		0X398,	0x25500400,	0XFFFFFFFF,	4,	0XFFFFFFFF,	0,	0x000002);
	mid = AddStrucMember(id,"GetDirectBufferCapacity",		0X39C,	0x25500400,	0XFFFFFFFF,	4,	0XFFFFFFFF,	0,	0x000002);
	
	id = GetStrucIdByName("JNIInvokeInterface");
	mid = AddStrucMember(id,"reserved0",					0,		0x25500400,	0XFFFFFFFF,	4,	0XFFFFFFFF,	0,	0x000002);
	mid = AddStrucMember(id,"reserved1",					0X4,	0x25500400,	0XFFFFFFFF,	4,	0XFFFFFFFF,	0,	0x000002);
	mid = AddStrucMember(id,"reserved2",					0X8,	0x25500400,	0XFFFFFFFF,	4,	0XFFFFFFFF,	0,	0x000002);
	mid = AddStrucMember(id,"DestroyJavaVM",				0XC,	0x25500400,	0XFFFFFFFF,	4,	0XFFFFFFFF,	0,	0x000002);
	mid = AddStrucMember(id,"AttachCurrentThread",			0X10,	0x25500400,	0XFFFFFFFF,	4,	0XFFFFFFFF,	0,	0x000002);
	mid = AddStrucMember(id,"DetachCurrentThread",			0X14,	0x25500400,	0XFFFFFFFF,	4,	0XFFFFFFFF,	0,	0x000002);
	mid = AddStrucMember(id,"GetEnv",						0X18,	0x25500400,	0XFFFFFFFF,	4,	0XFFFFFFFF,	0,	0x000002);
	mid = AddStrucMember(id,"AttachCurrentThreadAsDaemon",	0X1C,	0x25500400,	0XFFFFFFFF,	4,	0XFFFFFFFF,	0,	0x000002);
	return id;
}

//------------------------------------------------------------------------
// Information about structure types

static Structures(void) {
    auto id;
    BeginTypeUpdating(UTP_STRUCT);	
	id = Structures_0(id);
    EndTypeUpdating(UTP_STRUCT);
}

// End of file.

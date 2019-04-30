#include "encode.h"

Status check_capacity(EncodeInfo *encInfo)
{
	if((encInfo->image_capacity - 54) < 318)
	{
		return e_failure;
	}
	return e_success;
}

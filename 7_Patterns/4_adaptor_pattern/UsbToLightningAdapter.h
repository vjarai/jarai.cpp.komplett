#pragma once
#include "UsbLadegeraet.h"
#include "AppleLadegeraet.h"

class UsbToLightningAdapter : public AppleLadegeraet
{
public:
	UsbToLightningAdapter(UsbLadegeraet & usb_ladegeraet);
	int liefereStromViaLightning() override;
	UsbLadegeraet& usbLadegeraet;
};


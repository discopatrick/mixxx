#ifndef DEFS_VINYLCONTROL_H
#define DEFS_VINYLCONTROL_H

#define VINYL_PREF_KEY "[VinylControl]"

const QString kVCGroup = QString("[Channel%1]");
const int VINYL_STATUS_DISABLED = 0;
const int VINYL_STATUS_OK = 1;
const int VINYL_STATUS_WARNING = 2;
const int VINYL_STATUS_ERROR = 3;

#define MIXXX_VINYL_FINALSCRATCH "Final Scratch (crappy)"
#define MIXXX_VINYL_MIXVIBESDVS "MixVibes DVS V2 Vinyl"
#define MIXXX_VINYL_SERATOCV02VINYLSIDEA "Serato CV02 Vinyl, Side A"
#define MIXXX_VINYL_SERATOCV02VINYLSIDEB "Serato CV02 Vinyl, Side B"
#define MIXXX_VINYL_SERATOCD "Serato CD"
#define MIXXX_VINYL_TRAKTORSCRATCHSIDEA "Traktor Scratch MK1 Vinyl, Side A"
#define MIXXX_VINYL_TRAKTORSCRATCHSIDEB "Traktor Scratch MK1 Vinyl, Side B"

#define MIXXX_VINYL_SPEED_33 "33.3 RPM"
#define MIXXX_VINYL_SPEED_45 "45 RPM"

#define MIXXX_VINYL_SPEED_33_NUM 33.3f
#define MIXXX_VINYL_SPEED_45_NUM 45.0f

#define MIXXX_VCMODE_ABSOLUTE 0
#define MIXXX_VCMODE_RELATIVE 1
#define MIXXX_VCMODE_CONSTANT  2
#define MIXXX_VCMODE_SCRATCH  3

#define MIXXX_RELATIVE_CUE_OFF 0
#define MIXXX_RELATIVE_CUE_ONECUE 1
#define MIXXX_RELATIVE_CUE_HOTCUE 2

#define MIXXX_VC_DEFAULT_LEADINTIME 0

#define MIXXX_VINYL_SCOPE_UPDATE_LATENCY_MS 20
#define MIXXX_VINYL_SCOPE_SIZE 100

const int kMaximumVinylControlInputs = 4;

#endif /* DEFS_VINYLCONTROL_H */

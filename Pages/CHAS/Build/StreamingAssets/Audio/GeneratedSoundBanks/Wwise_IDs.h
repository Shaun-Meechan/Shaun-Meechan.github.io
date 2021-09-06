/////////////////////////////////////////////////////////////////////////////////////////////////////
//
// Audiokinetic Wwise generated include file. Do not edit.
//
/////////////////////////////////////////////////////////////////////////////////////////////////////

#ifndef __WWISE_IDS_H__
#define __WWISE_IDS_H__

#include <AK/SoundEngine/Common/AkTypes.h>

namespace AK
{
    namespace EVENTS
    {
        static const AkUniqueID DIALOGUESFX = 597240268U;
        static const AkUniqueID DOORSLAM = 3178299198U;
        static const AkUniqueID FOOTSTEP = 1866025847U;
        static const AkUniqueID ITEMPICKUP = 1851462748U;
        static const AkUniqueID JUMP = 3833651337U;
        static const AkUniqueID MOVINGPLATFORM = 1948881314U;
        static const AkUniqueID MUSICSWITCH = 1445037870U;
        static const AkUniqueID PLAYLV4MUSIC = 3627173640U;
        static const AkUniqueID UISELECTION = 2454203527U;
    } // namespace EVENTS

    namespace STATES
    {
        namespace MUSICSTATE
        {
            static const AkUniqueID GROUP = 1021618141U;

            namespace STATE
            {
                static const AkUniqueID BULLYMUSIC = 487193988U;
                static const AkUniqueID CAVEMUSIC = 158230019U;
                static const AkUniqueID DIALOGUEMUSIC = 336704516U;
                static const AkUniqueID LEVELMUSIC = 1321655446U;
                static const AkUniqueID NONE = 748895195U;
                static const AkUniqueID TITLEMUSIC = 2191159630U;
            } // namespace STATE
        } // namespace MUSICSTATE

    } // namespace STATES

    namespace SWITCHES
    {
        namespace FOOTSTEPSURFACES
        {
            static const AkUniqueID GROUP = 1060959935U;

            namespace SWITCH
            {
                static const AkUniqueID FLOORBOARDSURFACE = 218203440U;
                static const AkUniqueID GRASSSURFACE = 1393157138U;
                static const AkUniqueID STONESURFACE = 223751125U;
            } // namespace SWITCH
        } // namespace FOOTSTEPSURFACES

        namespace MUSICSWITCH
        {
            static const AkUniqueID GROUP = 1445037870U;

            namespace SWITCH
            {
                static const AkUniqueID BULLYMUSIC = 487193988U;
                static const AkUniqueID CAVEMUSIC = 158230019U;
                static const AkUniqueID DIALOGUEMUSIC = 336704516U;
                static const AkUniqueID LV4MUSIC = 3456941250U;
                static const AkUniqueID TITLEMUSIC = 2191159630U;
            } // namespace SWITCH
        } // namespace MUSICSWITCH

    } // namespace SWITCHES

    namespace BANKS
    {
        static const AkUniqueID INIT = 1355168291U;
        static const AkUniqueID MAIN = 3161908922U;
    } // namespace BANKS

    namespace BUSSES
    {
        static const AkUniqueID DIALOGUE = 3930136735U;
        static const AkUniqueID MASTER_AUDIO_BUS = 3803692087U;
        static const AkUniqueID MUSIC = 3991942870U;
        static const AkUniqueID SFX = 393239870U;
    } // namespace BUSSES

    namespace AUX_BUSSES
    {
        static const AkUniqueID REVERB = 348963605U;
    } // namespace AUX_BUSSES

    namespace AUDIO_DEVICES
    {
        static const AkUniqueID NO_OUTPUT = 2317455096U;
        static const AkUniqueID SYSTEM = 3859886410U;
    } // namespace AUDIO_DEVICES

}// namespace AK

#endif // __WWISE_IDS_H__

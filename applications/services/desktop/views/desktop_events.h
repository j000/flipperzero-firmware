#pragma once

typedef enum {
    DesktopMainEventOpenLockMenu,
    DesktopMainEventLock,
    DesktopMainEventOpenArchive,
    DesktopMainEventOpenFavoritePrimary,
    DesktopMainEventOpenFavoriteSecondary,
    DesktopMainEventOpenMenu,
    DesktopMainEventOpenDebug,
    DesktopMainEventOpenPassport,
    DesktopMainEventOpenPowerOff,

    DesktopMainEventOpenGame,
    DesktopMainEventOpenClock,
    DesktopMainEventOpenMusicPlayer,

    DesktopLockedEventUnlocked,
    DesktopLockedEventUpdate,
    DesktopLockedEventShowPinInput,

    DesktopPinInputEventResetWrongPinLabel,
    DesktopPinInputEventUnlocked,
    DesktopPinInputEventUnlockFailed,
    DesktopPinInputEventBack,

    DesktopPinTimeoutExit,

    DesktopDebugEventDeed,
    DesktopDebugEventWrongDeed,
    DesktopDebugEventSaveState,
    DesktopDebugEventExit,

    DesktopLockMenuEventLock,
    DesktopLockMenuEventPinLock,
    DesktopLockMenuEventDummyModeOn,
    DesktopLockMenuEventDummyModeOff,

    DesktopAnimationEventCheckAnimation,
    DesktopAnimationEventNewIdleAnimation,
    DesktopAnimationEventInteractAnimation,

    DesktopSlideshowCompleted,
    DesktopSlideshowPoweroff,

    // Global events
    DesktopGlobalBeforeAppStarted,
    DesktopGlobalAfterAppFinished,
    DesktopGlobalAutoLock,
} DesktopEvent;

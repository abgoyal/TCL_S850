#if 1  ////////////////////////// DDR2 qHD ////////////////////////// 

#ifdef MTK_DISPLAY_HIGH_RESOLUTION

/* video telephonly */
X_CON_SCE(CON_SCE_VT, 0x8008590C, 0x80805000, 0x01005010, 0x00185004, 0x20205003, 0x4040501A)

/* video record */
X_CON_SCE(CON_SCE_VIDEO_REC, 0x80085901, 0x80805001, 0x01005010, 0x00185004, 0x20205003, 0x40405027)

/* camera capture */
X_CON_SCE(CON_SCE_CAM_CAP, 0x80085900, 0x80805001, 0x01005010, 0x00185004, 0x20205003, 0x40405020)

/* camera preview */
X_CON_SCE(CON_SCE_CAM_PREVIEW, 0x80085900, 0x80805000, 0x01005010, 0x00185004, 0x20205003, 0x40405029)

/* video playback with TV-out (Play mode: LCM(Menu) / TV(Video, with HDMI)) */
X_CON_SCE(CON_SCE_PLAYBACK_WITH_TVOUT, 0x80085906, 0x80805001, 0x01005010, 0x00185004, 0x20205003, 0x40405021)

/* video playback without TV-out */
X_CON_SCE(CON_SCE_PLAYBACK_WITHOUT_TVOUT, 0x80085906, 0x80805001, 0x01005010, 0x00185004, 0x20205003, 0x40405021)

/* normal */
X_CON_SCE(CON_SCE_NORMAL, 0x80085901, 0x80805000, 0x01005010, 0x00185004, 0x20205003, 0x40405027)

#else

/* video telephonly */
X_CON_SCE(CON_SCE_VT, 0x8008590C, 0x80805000, 0x01005010, 0x00185004, 0x20205003, 0x4040501A)

/* video record */
X_CON_SCE(CON_SCE_VIDEO_REC, 0x80085901, 0x80805001, 0x01005010, 0x00185004, 0x20205003, 0x40405027)

/* camera capture */
X_CON_SCE(CON_SCE_CAM_CAP, 0x80085900, 0x80805001, 0x01005010, 0x00185004, 0x20205003, 0x40405018)

/* camera preview */
X_CON_SCE(CON_SCE_CAM_PREVIEW, 0x80085900, 0x80805000, 0x01005010, 0x00185004, 0x20205003, 0x40405029)

/* video playback with TV-out (Play mode: LCM(Menu) / TV(Video, with HDMI)) */
X_CON_SCE(CON_SCE_PLAYBACK_WITH_TVOUT, 0x80085906, 0x80805001, 0x01005010, 0x00185004, 0x20205003, 0x40405021)

/* video playback without TV-out */
X_CON_SCE(CON_SCE_PLAYBACK_WITHOUT_TVOUT, 0x80085906, 0x80805001, 0x01005010, 0x00185004, 0x20205003, 0x40405021)

#if defined(MTK_HDMI_SUPPORT)
/* normal */
X_CON_SCE(CON_SCE_NORMAL, 0x80085908, 0x80805000, 0x01005010, 0x00185004, 0x20205003, 0x40405030)
#else
/* normal */
X_CON_SCE(CON_SCE_NORMAL, 0x80085901, 0x80805000, 0x01005010, 0x00185004, 0x20205003, 0x40405027)
#endif

#endif // #ifdef MTK_DISPLAY_HIGH_RESOLUTION

#else ////////////////////////// DDR2 WVGA, MM hard mode for bandwidth validation ////////////////////////// 

/* video telephonly */
X_CON_SCE(CON_SCE_VT, 0x8008590C, 0x80805000, 0x0100500E, 0x18185004, 0x20205003, 0x40401016)

/* video record */
X_CON_SCE(CON_SCE_VIDEO_REC, 0x80085903, 0x80805001, 0x0100500E, 0x18185003, 0x20205003, 0x4040101F)

/* camera capture */
X_CON_SCE(CON_SCE_CAM_CAP, 0x80085900, 0x80805001, 0x0100500E, 0x18185003, 0x20205003, 0x40401017)

/* camera preview */
X_CON_SCE(CON_SCE_CAM_PREVIEW, 0x80085900, 0x80805000, 0x0100500E, 0x18185003, 0x20205003, 0x4040100F)

/* video playback with TV-out (Play mode: LCM(Menu) / TV(Video, with HDMI)) */
X_CON_SCE(CON_SCE_PLAYBACK_WITH_TVOUT, 0x8008590C, 0x80805001, 0x0100500E, 0x18185003, 0x20205003, 0x40401017)

/* video playback without TV-out */
X_CON_SCE(CON_SCE_PLAYBACK_WITHOUT_TVOUT, 0x8008590C, 0x80805001, 0x0100500E, 0x18185003, 0x20205003, 0x40401014)

/* normal */
X_CON_SCE(CON_SCE_NORMAL, 0x80085908, 0x80805000, 0x0100500E, 0x18185003, 0x20205003, 0x4040100F)

#endif
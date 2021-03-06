
/*
 * This file was generated by the SOM Compiler.
 * FileName: G:\cwpsh\rel\os2c\include\base\os2\wpsystem.h.
 * Generated using:
 *     SOM Precompiler somipc: 2.29.1.14
 *     SOM Emitter emith: 2.43
 */

/*
 *   Module Header
 * 
 *   Module Name: WPSYSTEM
 * 
 *   OS/2 Presentation Manager Workplace class definitions
 * 
 *   Copyright (c) International Business Machines Corporation 1991, 1992
 * 
 */


#ifndef SOM_WPSystem_h
#define SOM_WPSystem_h


/*
 * Passthru lines: File: "C.h", "before"
 */


/**********************************************************/
/* Defines for wpclsQuerySetting and wpclsSetSetting      */
/**********************************************************/

#define ANIMATION_OFF            0
#define ANIMATION_ON             1
#define ANIMATION_DEFAULT        2

#define PRINTSCREEN_OFF          0
#define PRINTSCREEN_ON           1
#define PRINTSCREEN_DEFAULT      2

#define BUTTON_HIDE              1
#define BUTTON_MINIMIZE          2
#define BUTTON_DEFAULT           3

#define LOGO_DEFAULT            -2
#define LOGO_INDEFINITE         -1
#define LOGO_NONE                0

#ifndef NAMECLASH_DEFS
#define NAMECLASH_DEFS           1
#define NAMECLASH_DEFAULT     0x40
#define NAMECLASH_RENAME      0x02
#define NAMECLASH_REPLACE     0x08
#define NAMECLASH_PROMPT      0x10
#endif

#define CONFIRM_OFF              0
#define CONFIRM_ON               1
#define CONFIRM_DEFAULT          2

#define DISPLAY_OFF              0
#define DISPLAY_ON               1
#define DISPLAY_DEFAULT          2

#define MENUS_SHORT 0
#define MENUS_LONG 1
#define MENUS_DEFAULT 2

#define TITLEBARICONS_ON 1
#define TITLEBARICONS_OFF 0
#define TITLEBARICONS_DEFAULT 2

#define MENUBAR_ON 1
#define MENUBAR_OFF 0
#define MENUBAR_DEFAULT 2



#include <som.h>

/*
 * -- This emitter treats Method Tokens as Thunks by default.
 * -- Use the sc modifier "nothunks" to change this default
 */
#undef somresolve_
#define somresolve_(obj,mToken) ((somMethodProc*)((void)obj, mToken))

/*
 * Define the class name as an object type
 */
#ifndef WPSystem
#define WPSystem SOMObject
#endif
#include <wpabs.h>

/*
 * Start of bindings for IDL types
 */

#ifndef SOMClass
    #define SOMClass SOMObject
#endif /* SOMClass */
#ifndef WPFolder
    #define WPFolder SOMObject
#endif /* WPFolder */
#ifndef M_WPObject
    #define M_WPObject SOMObject
#endif /* M_WPObject */
#ifndef WPObject
    #define WPObject SOMObject
#endif /* WPObject */
#ifndef WPImageFile
    #define WPImageFile SOMObject
#endif /* WPImageFile */
#ifndef M_WPAbstract
    #define M_WPAbstract SOMObject
#endif /* M_WPAbstract */
#ifndef M_WPSystem
    #define M_WPSystem SOMObject
#endif /* M_WPSystem */

/*
 * End of bindings for IDL types.
 */

#define WPSystem_MajorVersion 1
#define WPSystem_MinorVersion 2

/*
 * External name shortening if required
 */
#ifdef SOM_USE_SHORT_EXTERNAL_NAMES
#define WPSystemNewClass WPsysc
#pragma linkage(WPsysc, system)
#define WPSystemClassData WPsysd
#define WPSystemCClassData WPsysx
#endif /* SOM_USE_SHORT_EXTERNAL_NAMES */

/*
 * Include the meta class file
 */
#include <wpsystem.h>
/*--------------Migration------------*/
#define WPSystem_classObj WPSystemClassData.classObject
#define _WPSystem WPSystem_classObj

/*
 * Declare the class creation procedure
 */
SOMEXTERN SOMClass * SOMLINK WPSystemNewClass(integer4 somtmajorVersion,
		integer4 somtminorVersion);
#pragma linkage(WPSystemNewClass, system)

/*
 * Declare the class data structure
 */
SOMEXTERN struct WPSystemClassDataStructure {
	SOMClass *classObject;
	somMToken wpAddSystemWindowPage;
	somMToken wpAddSystemLogoPage;
	somMToken wpAddSystemPrintScreenPage;
	somMToken wpAddSystemConfirmationPage;
	somMToken wpAddTitleConfirmationPage;
	somMToken wpAddSystemScreenPage;
	somMToken wpAddDMQSDisplayTypePage;
	somMToken wpAddSysFdrSelfClosePage;
	somMToken wpAddSysFdrDefViewPage;
	somMToken wpAddSystemInputPage;
	somMToken wpAddSysFdrMenuPage;
	somMToken wpAddSystem256ColorPage;
	somMToken wpAddSystemFontSettingPages;
} SOMDLINK WPSystemClassData;

/*
 * Declare the C specific class data structure
 */
SOMEXTERN struct WPSystemCClassDataStructure {
	somMethodTabs parentMtab;
	somDToken instanceDataToken;
} SOMDLINK WPSystemCClassData;

/*
 * New and Renew macros for WPSystem
 */
#define WPSystemNew() \
   ( _WPSystem ? \
	_somNew(_WPSystem) \
	: ( WPSystemNewClass(\
		WPSystem_MajorVersion, \
		WPSystem_MinorVersion),\
	   _somNew(_WPSystem)))
#define WPSystemRenew(buf) \
   ( _WPSystem ? \
	_somRenew(_WPSystem, buf) \
	: ( WPSystemNewClass(\
		WPSystem_MajorVersion, \
		WPSystem_MinorVersion),\
	   _somRenew(_WPSystem, buf)))

/*
 * Override method: wpAddSettingsPages
 */
#define WPSystem_wpAddSettingsPages(somSelf,hwndNotebook) \
	WPObject_wpAddSettingsPages(somSelf,hwndNotebook)

/*
 * Override method: wpAddObjectWindowPage
 */
#define WPSystem_wpAddObjectWindowPage(somSelf,hwndNotebook) \
	WPObject_wpAddObjectWindowPage(somSelf,hwndNotebook)

/*
 * Override method: wpRestoreState
 */
#define WPSystem_wpRestoreState(somSelf,ulReserved) \
	WPObject_wpRestoreState(somSelf,ulReserved)

/*
 * Override method: wpSaveState
 */
#define WPSystem_wpSaveState(somSelf) \
	WPObject_wpSaveState(somSelf)

/*
 * Override method: wpFilterMenu
 */
#define WPSystem_wpFilterMenu(somSelf,pFlags,hwndCnr,fMultiSelect,ulMenuType,ulView,ulReserved) \
	WPObject_wpFilterMenu(somSelf,pFlags,hwndCnr,fMultiSelect,ulMenuType,ulView,ulReserved)

/*
 * Override method: somDefaultInit
 */
#define WPSystem_somDefaultInit(somSelf,ctrl) \
	SOMObject_somDefaultInit(somSelf,ctrl)

/*
 * Override method: somDestruct
 */
#define WPSystem_somDestruct(somSelf,doFree,ctrl) \
	SOMObject_somDestruct(somSelf,doFree,ctrl)

/*
 * New Method: wpAddSystemWindowPage
 */
typedef ULONG   SOMLINK somTP_WPSystem_wpAddSystemWindowPage(WPSystem *somSelf, 
		HWND hwndNotebook);
#pragma linkage(somTP_WPSystem_wpAddSystemWindowPage, system)
typedef somTP_WPSystem_wpAddSystemWindowPage *somTD_WPSystem_wpAddSystemWindowPage;
#define somMD_WPSystem_wpAddSystemWindowPage "::WPSystem::wpAddSystemWindowPage"
#define WPSystem_wpAddSystemWindowPage(somSelf,hwndNotebook) \
    (SOM_Resolve(somSelf, WPSystem, wpAddSystemWindowPage) \
	(somSelf,hwndNotebook))
#ifndef SOMGD_wpAddSystemWindowPage
    #if (defined(_wpAddSystemWindowPage) || defined(__wpAddSystemWindowPage))
        #undef _wpAddSystemWindowPage
        #undef __wpAddSystemWindowPage
        #define SOMGD_wpAddSystemWindowPage 1
    #else
        #define _wpAddSystemWindowPage WPSystem_wpAddSystemWindowPage
    #endif /* _wpAddSystemWindowPage */
#endif /* SOMGD_wpAddSystemWindowPage */

/*
 * New Method: wpAddSystemLogoPage
 */
typedef ULONG   SOMLINK somTP_WPSystem_wpAddSystemLogoPage(WPSystem *somSelf, 
		HWND hwndNotebook);
#pragma linkage(somTP_WPSystem_wpAddSystemLogoPage, system)
typedef somTP_WPSystem_wpAddSystemLogoPage *somTD_WPSystem_wpAddSystemLogoPage;
#define somMD_WPSystem_wpAddSystemLogoPage "::WPSystem::wpAddSystemLogoPage"
#define WPSystem_wpAddSystemLogoPage(somSelf,hwndNotebook) \
    (SOM_Resolve(somSelf, WPSystem, wpAddSystemLogoPage) \
	(somSelf,hwndNotebook))
#ifndef SOMGD_wpAddSystemLogoPage
    #if (defined(_wpAddSystemLogoPage) || defined(__wpAddSystemLogoPage))
        #undef _wpAddSystemLogoPage
        #undef __wpAddSystemLogoPage
        #define SOMGD_wpAddSystemLogoPage 1
    #else
        #define _wpAddSystemLogoPage WPSystem_wpAddSystemLogoPage
    #endif /* _wpAddSystemLogoPage */
#endif /* SOMGD_wpAddSystemLogoPage */

/*
 * New Method: wpAddSystemPrintScreenPage
 */
typedef ULONG   SOMLINK somTP_WPSystem_wpAddSystemPrintScreenPage(WPSystem *somSelf, 
		HWND hwndNotebook);
#pragma linkage(somTP_WPSystem_wpAddSystemPrintScreenPage, system)
typedef somTP_WPSystem_wpAddSystemPrintScreenPage *somTD_WPSystem_wpAddSystemPrintScreenPage;
#define somMD_WPSystem_wpAddSystemPrintScreenPage "::WPSystem::wpAddSystemPrintScreenPage"
#define WPSystem_wpAddSystemPrintScreenPage(somSelf,hwndNotebook) \
    (SOM_Resolve(somSelf, WPSystem, wpAddSystemPrintScreenPage) \
	(somSelf,hwndNotebook))
#ifndef SOMGD_wpAddSystemPrintScreenPage
    #if (defined(_wpAddSystemPrintScreenPage) || defined(__wpAddSystemPrintScreenPage))
        #undef _wpAddSystemPrintScreenPage
        #undef __wpAddSystemPrintScreenPage
        #define SOMGD_wpAddSystemPrintScreenPage 1
    #else
        #define _wpAddSystemPrintScreenPage WPSystem_wpAddSystemPrintScreenPage
    #endif /* _wpAddSystemPrintScreenPage */
#endif /* SOMGD_wpAddSystemPrintScreenPage */

/*
 * New Method: wpAddSystemInputPage
 */
typedef ULONG   SOMLINK somTP_WPSystem_wpAddSystemInputPage(WPSystem *somSelf, 
		HWND hwndNotebook);
#pragma linkage(somTP_WPSystem_wpAddSystemInputPage, system)
typedef somTP_WPSystem_wpAddSystemInputPage *somTD_WPSystem_wpAddSystemInputPage;
#define somMD_WPSystem_wpAddSystemInputPage "::WPSystem::wpAddSystemInputPage"
#define WPSystem_wpAddSystemInputPage(somSelf,hwndNotebook) \
    (SOM_Resolve(somSelf, WPSystem, wpAddSystemInputPage) \
	(somSelf,hwndNotebook))
#ifndef SOMGD_wpAddSystemInputPage
    #if (defined(_wpAddSystemInputPage) || defined(__wpAddSystemInputPage))
        #undef _wpAddSystemInputPage
        #undef __wpAddSystemInputPage
        #define SOMGD_wpAddSystemInputPage 1
    #else
        #define _wpAddSystemInputPage WPSystem_wpAddSystemInputPage
    #endif /* _wpAddSystemInputPage */
#endif /* SOMGD_wpAddSystemInputPage */

/*
 * New Method: wpAddSystemConfirmationPage
 */
typedef ULONG   SOMLINK somTP_WPSystem_wpAddSystemConfirmationPage(WPSystem *somSelf, 
		HWND hwndNotebook);
#pragma linkage(somTP_WPSystem_wpAddSystemConfirmationPage, system)
typedef somTP_WPSystem_wpAddSystemConfirmationPage *somTD_WPSystem_wpAddSystemConfirmationPage;
#define somMD_WPSystem_wpAddSystemConfirmationPage "::WPSystem::wpAddSystemConfirmationPage"
#define WPSystem_wpAddSystemConfirmationPage(somSelf,hwndNotebook) \
    (SOM_Resolve(somSelf, WPSystem, wpAddSystemConfirmationPage) \
	(somSelf,hwndNotebook))
#ifndef SOMGD_wpAddSystemConfirmationPage
    #if (defined(_wpAddSystemConfirmationPage) || defined(__wpAddSystemConfirmationPage))
        #undef _wpAddSystemConfirmationPage
        #undef __wpAddSystemConfirmationPage
        #define SOMGD_wpAddSystemConfirmationPage 1
    #else
        #define _wpAddSystemConfirmationPage WPSystem_wpAddSystemConfirmationPage
    #endif /* _wpAddSystemConfirmationPage */
#endif /* SOMGD_wpAddSystemConfirmationPage */

/*
 * New Method: wpAddSystemFontSettingPages
 */
typedef ULONG   SOMLINK somTP_WPSystem_wpAddSystemFontSettingPages(WPSystem *somSelf, 
		HWND hwndNotebook);
#pragma linkage(somTP_WPSystem_wpAddSystemFontSettingPages, system)
typedef somTP_WPSystem_wpAddSystemFontSettingPages *somTD_WPSystem_wpAddSystemFontSettingPages;
#define somMD_WPSystem_wpAddSystemFontSettingPages "::WPSystem::wpAddSystemFontSettingPages"
#define WPSystem_wpAddSystemFontSettingPages(somSelf,hwndNotebook) \
    (SOM_Resolve(somSelf, WPSystem, wpAddSystemFontSettingPages) \
	(somSelf,hwndNotebook))
#ifndef SOMGD_wpAddSystemFontSettingPages
    #if (defined(_wpAddSystemFontSettingPages) || defined(__wpAddSystemFontSettingPages))
        #undef _wpAddSystemFontSettingPages
        #undef __wpAddSystemFontSettingPages
        #define SOMGD_wpAddSystemFontSettingPages 1
    #else
        #define _wpAddSystemFontSettingPages WPSystem_wpAddSystemFontSettingPages
    #endif /* _wpAddSystemFontSettingPages */
#endif /* SOMGD_wpAddSystemFontSettingPages */

/*
 * New Method: wpAddTitleConfirmationPage
 */
typedef ULONG   SOMLINK somTP_WPSystem_wpAddTitleConfirmationPage(WPSystem *somSelf, 
		HWND hwndNotebook);
#pragma linkage(somTP_WPSystem_wpAddTitleConfirmationPage, system)
typedef somTP_WPSystem_wpAddTitleConfirmationPage *somTD_WPSystem_wpAddTitleConfirmationPage;
#define somMD_WPSystem_wpAddTitleConfirmationPage "::WPSystem::wpAddTitleConfirmationPage"
#define WPSystem_wpAddTitleConfirmationPage(somSelf,hwndNotebook) \
    (SOM_Resolve(somSelf, WPSystem, wpAddTitleConfirmationPage) \
	(somSelf,hwndNotebook))
#ifndef SOMGD_wpAddTitleConfirmationPage
    #if (defined(_wpAddTitleConfirmationPage) || defined(__wpAddTitleConfirmationPage))
        #undef _wpAddTitleConfirmationPage
        #undef __wpAddTitleConfirmationPage
        #define SOMGD_wpAddTitleConfirmationPage 1
    #else
        #define _wpAddTitleConfirmationPage WPSystem_wpAddTitleConfirmationPage
    #endif /* _wpAddTitleConfirmationPage */
#endif /* SOMGD_wpAddTitleConfirmationPage */

/*
 * New Method: wpAddSystemScreenPage
 */
typedef ULONG   SOMLINK somTP_WPSystem_wpAddSystemScreenPage(WPSystem *somSelf, 
		HWND hwndNotebook);
#pragma linkage(somTP_WPSystem_wpAddSystemScreenPage, system)
typedef somTP_WPSystem_wpAddSystemScreenPage *somTD_WPSystem_wpAddSystemScreenPage;
#define somMD_WPSystem_wpAddSystemScreenPage "::WPSystem::wpAddSystemScreenPage"
#define WPSystem_wpAddSystemScreenPage(somSelf,hwndNotebook) \
    (SOM_Resolve(somSelf, WPSystem, wpAddSystemScreenPage) \
	(somSelf,hwndNotebook))
#ifndef SOMGD_wpAddSystemScreenPage
    #if (defined(_wpAddSystemScreenPage) || defined(__wpAddSystemScreenPage))
        #undef _wpAddSystemScreenPage
        #undef __wpAddSystemScreenPage
        #define SOMGD_wpAddSystemScreenPage 1
    #else
        #define _wpAddSystemScreenPage WPSystem_wpAddSystemScreenPage
    #endif /* _wpAddSystemScreenPage */
#endif /* SOMGD_wpAddSystemScreenPage */

/*
 * New Method: wpAddDMQSDisplayTypePage
 */
typedef ULONG   SOMLINK somTP_WPSystem_wpAddDMQSDisplayTypePage(WPSystem *somSelf, 
		HWND hwndNotebook);
#pragma linkage(somTP_WPSystem_wpAddDMQSDisplayTypePage, system)
typedef somTP_WPSystem_wpAddDMQSDisplayTypePage *somTD_WPSystem_wpAddDMQSDisplayTypePage;
#define somMD_WPSystem_wpAddDMQSDisplayTypePage "::WPSystem::wpAddDMQSDisplayTypePage"
#define WPSystem_wpAddDMQSDisplayTypePage(somSelf,hwndNotebook) \
    (SOM_Resolve(somSelf, WPSystem, wpAddDMQSDisplayTypePage) \
	(somSelf,hwndNotebook))
#ifndef SOMGD_wpAddDMQSDisplayTypePage
    #if (defined(_wpAddDMQSDisplayTypePage) || defined(__wpAddDMQSDisplayTypePage))
        #undef _wpAddDMQSDisplayTypePage
        #undef __wpAddDMQSDisplayTypePage
        #define SOMGD_wpAddDMQSDisplayTypePage 1
    #else
        #define _wpAddDMQSDisplayTypePage WPSystem_wpAddDMQSDisplayTypePage
    #endif /* _wpAddDMQSDisplayTypePage */
#endif /* SOMGD_wpAddDMQSDisplayTypePage */

/*
 * New Method: wpAddSystem256ColorPage
 */
typedef ULONG   SOMLINK somTP_WPSystem_wpAddSystem256ColorPage(WPSystem *somSelf, 
		HWND hwndNotebook);
#pragma linkage(somTP_WPSystem_wpAddSystem256ColorPage, system)
typedef somTP_WPSystem_wpAddSystem256ColorPage *somTD_WPSystem_wpAddSystem256ColorPage;
#define somMD_WPSystem_wpAddSystem256ColorPage "::WPSystem::wpAddSystem256ColorPage"
#define WPSystem_wpAddSystem256ColorPage(somSelf,hwndNotebook) \
    (SOM_Resolve(somSelf, WPSystem, wpAddSystem256ColorPage) \
	(somSelf,hwndNotebook))
#ifndef SOMGD_wpAddSystem256ColorPage
    #if (defined(_wpAddSystem256ColorPage) || defined(__wpAddSystem256ColorPage))
        #undef _wpAddSystem256ColorPage
        #undef __wpAddSystem256ColorPage
        #define SOMGD_wpAddSystem256ColorPage 1
    #else
        #define _wpAddSystem256ColorPage WPSystem_wpAddSystem256ColorPage
    #endif /* _wpAddSystem256ColorPage */
#endif /* SOMGD_wpAddSystem256ColorPage */

/*
 * New Method: wpAddSysFdrMenuPage
 */
typedef ULONG   SOMLINK somTP_WPSystem_wpAddSysFdrMenuPage(WPSystem *somSelf, 
		HWND hwndNotebook);
#pragma linkage(somTP_WPSystem_wpAddSysFdrMenuPage, system)
typedef somTP_WPSystem_wpAddSysFdrMenuPage *somTD_WPSystem_wpAddSysFdrMenuPage;
#define somMD_WPSystem_wpAddSysFdrMenuPage "::WPSystem::wpAddSysFdrMenuPage"
#define WPSystem_wpAddSysFdrMenuPage(somSelf,hwndNotebook) \
    (SOM_Resolve(somSelf, WPSystem, wpAddSysFdrMenuPage) \
	(somSelf,hwndNotebook))
#ifndef SOMGD_wpAddSysFdrMenuPage
    #if (defined(_wpAddSysFdrMenuPage) || defined(__wpAddSysFdrMenuPage))
        #undef _wpAddSysFdrMenuPage
        #undef __wpAddSysFdrMenuPage
        #define SOMGD_wpAddSysFdrMenuPage 1
    #else
        #define _wpAddSysFdrMenuPage WPSystem_wpAddSysFdrMenuPage
    #endif /* _wpAddSysFdrMenuPage */
#endif /* SOMGD_wpAddSysFdrMenuPage */

/*
 * New Method: wpAddSysFdrSelfClosePage
 */
typedef ULONG   SOMLINK somTP_WPSystem_wpAddSysFdrSelfClosePage(WPSystem *somSelf, 
		HWND hwndNotebook);
#pragma linkage(somTP_WPSystem_wpAddSysFdrSelfClosePage, system)
typedef somTP_WPSystem_wpAddSysFdrSelfClosePage *somTD_WPSystem_wpAddSysFdrSelfClosePage;
#define somMD_WPSystem_wpAddSysFdrSelfClosePage "::WPSystem::wpAddSysFdrSelfClosePage"
#define WPSystem_wpAddSysFdrSelfClosePage(somSelf,hwndNotebook) \
    (SOM_Resolve(somSelf, WPSystem, wpAddSysFdrSelfClosePage) \
	(somSelf,hwndNotebook))
#ifndef SOMGD_wpAddSysFdrSelfClosePage
    #if (defined(_wpAddSysFdrSelfClosePage) || defined(__wpAddSysFdrSelfClosePage))
        #undef _wpAddSysFdrSelfClosePage
        #undef __wpAddSysFdrSelfClosePage
        #define SOMGD_wpAddSysFdrSelfClosePage 1
    #else
        #define _wpAddSysFdrSelfClosePage WPSystem_wpAddSysFdrSelfClosePage
    #endif /* _wpAddSysFdrSelfClosePage */
#endif /* SOMGD_wpAddSysFdrSelfClosePage */

/*
 * New Method: wpAddSysFdrDefViewPage
 */
typedef ULONG   SOMLINK somTP_WPSystem_wpAddSysFdrDefViewPage(WPSystem *somSelf, 
		HWND hwndNotebook);
#pragma linkage(somTP_WPSystem_wpAddSysFdrDefViewPage, system)
typedef somTP_WPSystem_wpAddSysFdrDefViewPage *somTD_WPSystem_wpAddSysFdrDefViewPage;
#define somMD_WPSystem_wpAddSysFdrDefViewPage "::WPSystem::wpAddSysFdrDefViewPage"
#define WPSystem_wpAddSysFdrDefViewPage(somSelf,hwndNotebook) \
    (SOM_Resolve(somSelf, WPSystem, wpAddSysFdrDefViewPage) \
	(somSelf,hwndNotebook))
#ifndef SOMGD_wpAddSysFdrDefViewPage
    #if (defined(_wpAddSysFdrDefViewPage) || defined(__wpAddSysFdrDefViewPage))
        #undef _wpAddSysFdrDefViewPage
        #undef __wpAddSysFdrDefViewPage
        #define SOMGD_wpAddSysFdrDefViewPage 1
    #else
        #define _wpAddSysFdrDefViewPage WPSystem_wpAddSysFdrDefViewPage
    #endif /* _wpAddSysFdrDefViewPage */
#endif /* SOMGD_wpAddSysFdrDefViewPage */
#ifndef SOM_DONT_USE_INHERITED_MACROS
#define WPSystem_wpQueryHandle WPObject_wpQueryHandle
#define WPSystem_wpSaveImmediate WPObject_wpSaveImmediate
#define WPSystem_wpSetTitle WPObject_wpSetTitle
#define WPSystem_wpCopyObject WPObject_wpCopyObject
#define WPSystem_wpMoveObject WPObject_wpMoveObject
#define WPSystem_wpQueryIcon WPObject_wpQueryIcon
#define WPSystem_wpQueryIconData WPObject_wpQueryIconData
#define WPSystem_wpSetIconData WPObject_wpSetIconData
#define WPSystem_wpDragOver WPObject_wpDragOver
#define WPSystem_wpReplaceObject WPObject_wpReplaceObject
#define WPSystem_wpQueryNameClashOptions WPObject_wpQueryNameClashOptions
#define WPSystem_wpIdentify WPObject_wpIdentify
#define WPSystem_wpAddObjectGeneralPage WPObject_wpAddObjectGeneralPage
#define WPSystem_wpAddObjectGeneralPage2 WPObject_wpAddObjectGeneralPage2
#define WPSystem_wpAddToObjUseList WPObject_wpAddToObjUseList
#define WPSystem_wpAllocMem WPObject_wpAllocMem
#define WPSystem_wpAppendObject WPObject_wpAppendObject
#define WPSystem_wpAssertObjectMutexSem WPObject_wpAssertObjectMutexSem
#define WPSystem_wpClose WPObject_wpClose
#define WPSystem_wpCnrInsertObject WPObject_wpCnrInsertObject
#define WPSystem_wpCnrRemoveObject WPObject_wpCnrRemoveObject
#define WPSystem_wpCnrSetEmphasis WPObject_wpCnrSetEmphasis
#define WPSystem_wpConfirmDelete WPObject_wpConfirmDelete
#define WPSystem_wpConfirmObjectTitle WPObject_wpConfirmObjectTitle
#define WPSystem_wpCopiedFromTemplate WPObject_wpCopiedFromTemplate
#define WPSystem_wpCreateAnother WPObject_wpCreateAnother
#define WPSystem_wpCreateFromTemplate WPObject_wpCreateFromTemplate
#define WPSystem_wpCreateShadowObject WPObject_wpCreateShadowObject
#define WPSystem_wpDelete WPObject_wpDelete
#define WPSystem_wpDeleteFromObjUseList WPObject_wpDeleteFromObjUseList
#define WPSystem_wpDisplayHelp WPObject_wpDisplayHelp
#define WPSystem_wpDisplayMenu WPObject_wpDisplayMenu
#define WPSystem_wpDoesObjectMatch WPObject_wpDoesObjectMatch
#define WPSystem_wpDraggedOverObject WPObject_wpDraggedOverObject
#define WPSystem_wpDrop WPObject_wpDrop
#define WPSystem_wpDroppedOnObject WPObject_wpDroppedOnObject
#define WPSystem_wpEndConversation WPObject_wpEndConversation
#define WPSystem_wpFilterPopupMenu WPObject_wpFilterPopupMenu
#define WPSystem_wpFindUseItem WPObject_wpFindUseItem
#define WPSystem_wpFormatDragItem WPObject_wpFormatDragItem
#define WPSystem_wpFree WPObject_wpFree
#define WPSystem_wpFreeMem WPObject_wpFreeMem
#define WPSystem_wpHide WPObject_wpHide
#define WPSystem_wpInitData WPObject_wpInitData
#define WPSystem_wpInsertPopupMenuItems WPObject_wpInsertPopupMenuItems
#define WPSystem_wpInsertMenuItems WPObject_wpInsertMenuItems
#define WPSystem_wpInsertSettingsPage WPObject_wpInsertSettingsPage
#define WPSystem_wpMenuItemHelpSelected WPObject_wpMenuItemHelpSelected
#define WPSystem_wpMenuItemSelected WPObject_wpMenuItemSelected
#define WPSystem_wpModifyPopupMenu WPObject_wpModifyPopupMenu
#define WPSystem_wpModifyMenu WPObject_wpModifyMenu
#define WPSystem_wpOpen WPObject_wpOpen
#define WPSystem_wpPrintObject WPObject_wpPrintObject
#define WPSystem_wpQueryConcurrentView WPObject_wpQueryConcurrentView
#define WPSystem_wpQueryButtonAppearance WPObject_wpQueryButtonAppearance
#define WPSystem_wpQueryConfirmations WPObject_wpQueryConfirmations
#define WPSystem_wpQueryDefaultHelp WPObject_wpQueryDefaultHelp
#define WPSystem_wpQueryDefaultView WPObject_wpQueryDefaultView
#define WPSystem_wpQueryDetailsData WPObject_wpQueryDetailsData
#define WPSystem_wpQueryError WPObject_wpQueryError
#define WPSystem_wpSetFolder WPObject_wpSetFolder
#define WPSystem_wpQueryFolder WPObject_wpQueryFolder
#define WPSystem_wpQueryMinWindow WPObject_wpQueryMinWindow
#define WPSystem_wpQueryStyle WPObject_wpQueryStyle
#define WPSystem_wpSetTaskRec WPObject_wpSetTaskRec
#define WPSystem_wpFindTaskRec WPObject_wpFindTaskRec
#define WPSystem_wpQueryTitle WPObject_wpQueryTitle
#define WPSystem_wpRegisterView WPObject_wpRegisterView
#define WPSystem_wpReleaseObjectMutexSem WPObject_wpReleaseObjectMutexSem
#define WPSystem_wpRender WPObject_wpRender
#define WPSystem_wpRenderComplete WPObject_wpRenderComplete
#define WPSystem_wpRequestObjectMutexSem WPObject_wpRequestObjectMutexSem
#define WPSystem_wpRestore WPObject_wpRestore
#define WPSystem_wpRestoreData WPObject_wpRestoreData
#define WPSystem_wpRestoreLong WPObject_wpRestoreLong
#define WPSystem_wpRestoreString WPObject_wpRestoreString
#define WPSystem_wpSaveData WPObject_wpSaveData
#define WPSystem_wpSaveDeferred WPObject_wpSaveDeferred
#define WPSystem_wpSaveLong WPObject_wpSaveLong
#define WPSystem_wpSaveString WPObject_wpSaveString
#define WPSystem_wpScanSetupString WPObject_wpScanSetupString
#define WPSystem_wpSetConcurrentView WPObject_wpSetConcurrentView
#define WPSystem_wpSetButtonAppearance WPObject_wpSetButtonAppearance
#define WPSystem_wpSetDefaultHelp WPObject_wpSetDefaultHelp
#define WPSystem_wpSetDefaultView WPObject_wpSetDefaultView
#define WPSystem_wpSetError WPObject_wpSetError
#define WPSystem_wpQueryScreenGroupID WPObject_wpQueryScreenGroupID
#define WPSystem_wpSetupOnce WPObject_wpSetupOnce
#define WPSystem_wpSetIcon WPObject_wpSetIcon
#define WPSystem_wpSetMinWindow WPObject_wpSetMinWindow
#define WPSystem_wpModifyStyle WPObject_wpModifyStyle
#define WPSystem_wpSetup WPObject_wpSetup
#define WPSystem_wpSwitchTo WPObject_wpSwitchTo
#define WPSystem_wpUnInitData WPObject_wpUnInitData
#define WPSystem_wpViewObject WPObject_wpViewObject
#define WPSystem_wpQueryTrueStyle WPObject_wpQueryTrueStyle
#define WPSystem_wpUnlockObject WPObject_wpUnlockObject
#define WPSystem_wpObjectReady WPObject_wpObjectReady
#define WPSystem_wpIsObjectInitialized WPObject_wpIsObjectInitialized
#define WPSystem_wpCreateShadowObjectExt WPObject_wpCreateShadowObjectExt
#define WPSystem_wpCnrDeleteUseItem WPObject_wpCnrDeleteUseItem
#define WPSystem_wpIsDeleteable WPObject_wpIsDeleteable
#define WPSystem_wpQueryCoreRecord WPObject_wpQueryCoreRecord
#define WPSystem_wpSetObjectID WPObject_wpSetObjectID
#define WPSystem_wpQueryObjectID WPObject_wpQueryObjectID
#define WPSystem_wpSetDefaultIconPos WPObject_wpSetDefaultIconPos
#define WPSystem_wpQueryDefaultIconPos WPObject_wpQueryDefaultIconPos
#define WPSystem_wpCnrRefreshDetails WPObject_wpCnrRefreshDetails
#define WPSystem_wpFindViewItem WPObject_wpFindViewItem
#define WPSystem_wpLockObject WPObject_wpLockObject
#define WPSystem_wpIsLocked WPObject_wpIsLocked
#define WPSystem_wpQueryContainerFlagPtr WPObject_wpQueryContainerFlagPtr
#define WPSystem_wpWaitForClose WPObject_wpWaitForClose
#define WPSystem_wpSetMenuStyle WPObject_wpSetMenuStyle
#define WPSystem_wpQueryMenuStyle WPObject_wpQueryMenuStyle
#define WPSystem_wpSetStyle WPObject_wpSetStyle
#define WPSystem_somInit SOMObject_somInit
#define WPSystem_somUninit SOMObject_somUninit
#define WPSystem_somDefaultCopyInit SOMObject_somDefaultCopyInit
#define WPSystem_somDefaultAssign SOMObject_somDefaultAssign
#define WPSystem_somDefaultConstCopyInit SOMObject_somDefaultConstCopyInit
#define WPSystem_somDefaultVCopyInit SOMObject_somDefaultVCopyInit
#define WPSystem_somDefaultConstVCopyInit SOMObject_somDefaultConstVCopyInit
#define WPSystem_somDefaultConstAssign SOMObject_somDefaultConstAssign
#define WPSystem_somDefaultVAssign SOMObject_somDefaultVAssign
#define WPSystem_somDefaultConstVAssign SOMObject_somDefaultConstVAssign
#define WPSystem_somFree SOMObject_somFree
#define WPSystem_somGetClass SOMObject_somGetClass
#define WPSystem_somGetClassName SOMObject_somGetClassName
#define WPSystem_somGetSize SOMObject_somGetSize
#define WPSystem_somIsA SOMObject_somIsA
#define WPSystem_somIsInstanceOf SOMObject_somIsInstanceOf
#define WPSystem_somRespondsTo SOMObject_somRespondsTo
#define WPSystem_somDispatch SOMObject_somDispatch
#define WPSystem_somClassDispatch SOMObject_somClassDispatch
#define WPSystem_somCastObj SOMObject_somCastObj
#define WPSystem_somResetObj SOMObject_somResetObj
#define WPSystem_somDispatchV SOMObject_somDispatchV
#define WPSystem_somDispatchL SOMObject_somDispatchL
#define WPSystem_somDispatchA SOMObject_somDispatchA
#define WPSystem_somDispatchD SOMObject_somDispatchD
#define WPSystem_somPrintSelf SOMObject_somPrintSelf
#define WPSystem_somDumpSelf SOMObject_somDumpSelf
#define WPSystem_somDumpSelfInt SOMObject_somDumpSelfInt
#endif /* SOM_DONT_USE_INHERITED_MACROS */

#endif       /* SOM_WPSystem_h */

#ifndef SOM_M_WPSystem_h
#define SOM_M_WPSystem_h


#include <som.h>

/*
 * -- This emitter treats Method Tokens as Thunks by default.
 * -- Use the sc modifier "nothunks" to change this default
 */
#undef somresolve_
#define somresolve_(obj,mToken) ((somMethodProc*)((void)obj, mToken))

/*
 * Define the class name as an object type
 */
#ifndef M_WPSystem
#define M_WPSystem SOMObject
#endif
#include <wpabs.h>

/*
 * Start of bindings for IDL types
 */


/*
 * End of bindings for IDL types.
 */

#define M_WPSystem_MajorVersion 1
#define M_WPSystem_MinorVersion 2

/*
 * External name shortening if required
 */
#ifdef SOM_USE_SHORT_EXTERNAL_NAMES
#define M_WPSystemNewClass WPsysc
#pragma linkage(WPsysc, system)
#define M_WPSystemClassData WPsysd
#define M_WPSystemCClassData WPsysx
#endif /* SOM_USE_SHORT_EXTERNAL_NAMES */
/*--------------Migration------------*/
#define M_WPSystem_classObj M_WPSystemClassData.classObject
#define _M_WPSystem M_WPSystem_classObj

/*
 * Declare the class creation procedure
 */
SOMEXTERN SOMClass * SOMLINK M_WPSystemNewClass(integer4 somtmajorVersion,
		integer4 somtminorVersion);
#pragma linkage(M_WPSystemNewClass, system)

/*
 * Declare the class data structure
 */
SOMEXTERN struct M_WPSystemClassDataStructure {
	SOMClass *classObject;
} SOMDLINK M_WPSystemClassData;

/*
 * Declare the C specific class data structure
 */
SOMEXTERN struct M_WPSystemCClassDataStructure {
	somMethodTabs parentMtab;
	somDToken instanceDataToken;
} SOMDLINK M_WPSystemCClassData;

/*
 * New and Renew macros for M_WPSystem
 */
#define M_WPSystemNew() \
   ( _M_WPSystem ? \
	_somNew(_M_WPSystem) \
	: ( M_WPSystemNewClass(\
		M_WPSystem_MajorVersion, \
		M_WPSystem_MinorVersion),\
	   _somNew(_M_WPSystem)))
#define M_WPSystemRenew(buf) \
   ( _M_WPSystem ? \
	_somRenew(_M_WPSystem, buf) \
	: ( M_WPSystemNewClass(\
		M_WPSystem_MajorVersion, \
		M_WPSystem_MinorVersion),\
	   _somRenew(_M_WPSystem, buf)))

/*
 * Override method: wpclsQueryTitle
 */
#define M_WPSystem_wpclsQueryTitle(somSelf) \
	M_WPObject_wpclsQueryTitle(somSelf)

/*
 * Override method: wpclsQueryDefaultHelp
 */
#define M_WPSystem_wpclsQueryDefaultHelp(somSelf,pHelpPanelId,pszHelpLibrary) \
	M_WPObject_wpclsQueryDefaultHelp(somSelf,pHelpPanelId,pszHelpLibrary)

/*
 * Override method: wpclsQueryDefaultView
 */
#define M_WPSystem_wpclsQueryDefaultView(somSelf) \
	M_WPObject_wpclsQueryDefaultView(somSelf)

/*
 * Override method: wpclsQueryStyle
 */
#define M_WPSystem_wpclsQueryStyle(somSelf) \
	M_WPObject_wpclsQueryStyle(somSelf)

/*
 * Override method: wpclsQueryIconData
 */
#define M_WPSystem_wpclsQueryIconData(somSelf,pIconInfo) \
	M_WPObject_wpclsQueryIconData(somSelf,pIconInfo)

/*
 * Override method: wpclsQuerySettingsPageSize
 */
#define M_WPSystem_wpclsQuerySettingsPageSize(somSelf,pSizl) \
	M_WPObject_wpclsQuerySettingsPageSize(somSelf,pSizl)

/*
 * Override method: wpclsQuerySetting
 */
#define M_WPSystem_wpclsQuerySetting(somSelf,pszSetting,pValue,ulValueLen) \
	M_WPAbstract_wpclsQuerySetting(somSelf,pszSetting,pValue,ulValueLen)

/*
 * Override method: wpclsSetSetting
 */
#define M_WPSystem_wpclsSetSetting(somSelf,pszSetting,pValue) \
	M_WPAbstract_wpclsSetSetting(somSelf,pszSetting,pValue)
#ifndef SOM_DONT_USE_INHERITED_MACROS
#define M_WPSystem_wpclsObjectFromHandle M_WPObject_wpclsObjectFromHandle
#define M_WPSystem_wpclsCreateDefaultTemplates M_WPObject_wpclsCreateDefaultTemplates
#define M_WPSystem_wpclsInitData M_WPObject_wpclsInitData
#define M_WPSystem_wpclsMakeAwake M_WPObject_wpclsMakeAwake
#define M_WPSystem_wpclsNew M_WPObject_wpclsNew
#define M_WPSystem_wpclsQueryDetails M_WPObject_wpclsQueryDetails
#define M_WPSystem_wpclsQueryDetailsInfo M_WPObject_wpclsQueryDetailsInfo
#define M_WPSystem_wpclsQueryExtendedCriteria M_WPObject_wpclsQueryExtendedCriteria
#define M_WPSystem_wpclsQueryFolder M_WPObject_wpclsQueryFolder
#define M_WPSystem_wpclsQueryIcon M_WPObject_wpclsQueryIcon
#define M_WPSystem_wpclsQuerySearchInfo M_WPObject_wpclsQuerySearchInfo
#define M_WPSystem_wpclsUnInitData M_WPObject_wpclsUnInitData
#define M_WPSystem_wpclsFindObjectFirst M_WPObject_wpclsFindObjectFirst
#define M_WPSystem_wpclsFindObjectNext M_WPObject_wpclsFindObjectNext
#define M_WPSystem_wpclsFindObjectEnd M_WPObject_wpclsFindObjectEnd
#define M_WPSystem_wpclsSetError M_WPObject_wpclsSetError
#define M_WPSystem_wpclsQueryError M_WPObject_wpclsQueryError
#define M_WPSystem_wpclsQueryObject M_WPObject_wpclsQueryObject
#define M_WPSystem_wpclsQueryButtonAppearance M_WPObject_wpclsQueryButtonAppearance
#define M_WPSystem_wpclsDecUsage M_WPObject_wpclsDecUsage
#define M_WPSystem_wpclsIncUsage M_WPObject_wpclsIncUsage
#define M_WPSystem_wpclsInsertMultipleObjects M_WPObject_wpclsInsertMultipleObjects
#define M_WPSystem_wpclsFindOneObject M_WPObject_wpclsFindOneObject
#define M_WPSystem_wpclsSetSettingsPageSize M_WPObject_wpclsSetSettingsPageSize
#define M_WPSystem_wpclsSetIconData M_WPObject_wpclsSetIconData
#define M_WPSystem_wpclsSetIcon M_WPObject_wpclsSetIcon
#define M_WPSystem_wpclsRemoveObjects M_WPObject_wpclsRemoveObjects
#define M_WPSystem_somUninit SOMObject_somUninit
#define M_WPSystem_somClassReady SOMClass_somClassReady
#define M_WPSystem_somNew SOMClass_somNew
#define M_WPSystem_somRenew SOMClass_somRenew
#define M_WPSystem__get_somDataAlignment SOMClass__get_somDataAlignment
#define M_WPSystem__get_somInstanceDataOffsets SOMClass__get_somInstanceDataOffsets
#define M_WPSystem__get_somDirectInitClasses SOMClass__get_somDirectInitClasses
#define M_WPSystem__set_somDirectInitClasses SOMClass__set_somDirectInitClasses
#define M_WPSystem_somNewNoInit SOMClass_somNewNoInit
#define M_WPSystem_somRenewNoInit SOMClass_somRenewNoInit
#define M_WPSystem_somRenewNoZero SOMClass_somRenewNoZero
#define M_WPSystem_somRenewNoInitNoZero SOMClass_somRenewNoInitNoZero
#define M_WPSystem_somAllocate SOMClass_somAllocate
#define M_WPSystem_somDeallocate SOMClass_somDeallocate
#define M_WPSystem__get_somClassAllocate SOMClass__get_somClassAllocate
#define M_WPSystem__get_somClassDeallocate SOMClass__get_somClassDeallocate
#define M_WPSystem_somGetInstanceInitMask SOMClass_somGetInstanceInitMask
#define M_WPSystem_somGetInstanceDestructionMask SOMClass_somGetInstanceDestructionMask
#define M_WPSystem_somGetInstanceAssignmentMask SOMClass_somGetInstanceAssignmentMask
#define M_WPSystem_somInitClass SOMClass_somInitClass
#define M_WPSystem_somInitMIClass SOMClass_somInitMIClass
#define M_WPSystem_somAddStaticMethod SOMClass_somAddStaticMethod
#define M_WPSystem_somAddDynamicMethod SOMClass_somAddDynamicMethod
#define M_WPSystem_somOverrideSMethod SOMClass_somOverrideSMethod
#define M_WPSystem_somGetApplyStub SOMClass_somGetApplyStub
#define M_WPSystem_somGetClassData SOMClass_somGetClassData
#define M_WPSystem_somSetClassData SOMClass_somSetClassData
#define M_WPSystem_somGetClassMtab SOMClass_somGetClassMtab
#define M_WPSystem_somGetInstanceOffset SOMClass_somGetInstanceOffset
#define M_WPSystem_somGetInstancePartSize SOMClass_somGetInstancePartSize
#define M_WPSystem_somGetInstanceSize SOMClass_somGetInstanceSize
#define M_WPSystem_somGetInstanceToken SOMClass_somGetInstanceToken
#define M_WPSystem_somGetMemberToken SOMClass_somGetMemberToken
#define M_WPSystem_somGetMethodData SOMClass_somGetMethodData
#define M_WPSystem_somGetRdStub SOMClass_somGetRdStub
#define M_WPSystem_somGetMethodDescriptor SOMClass_somGetMethodDescriptor
#define M_WPSystem_somGetMethodIndex SOMClass_somGetMethodIndex
#define M_WPSystem_somGetMethodToken SOMClass_somGetMethodToken
#define M_WPSystem_somGetName SOMClass_somGetName
#define M_WPSystem_somGetNthMethodData SOMClass_somGetNthMethodData
#define M_WPSystem_somGetNthMethodInfo SOMClass_somGetNthMethodInfo
#define M_WPSystem_somGetNumMethods SOMClass_somGetNumMethods
#define M_WPSystem_somGetNumStaticMethods SOMClass_somGetNumStaticMethods
#define M_WPSystem_somGetParent SOMClass_somGetParent
#define M_WPSystem_somGetParents SOMClass_somGetParents
#define M_WPSystem_somGetPClsMtab SOMClass_somGetPClsMtab
#define M_WPSystem_somGetPClsMtabs SOMClass_somGetPClsMtabs
#define M_WPSystem_somGetVersionNumbers SOMClass_somGetVersionNumbers
#define M_WPSystem_somSetMethodDescriptor SOMClass_somSetMethodDescriptor
#define M_WPSystem_somFindMethod SOMClass_somFindMethod
#define M_WPSystem_somFindMethodOk SOMClass_somFindMethodOk
#define M_WPSystem_somFindSMethod SOMClass_somFindSMethod
#define M_WPSystem_somFindSMethodOk SOMClass_somFindSMethodOk
#define M_WPSystem_somLookupMethod SOMClass_somLookupMethod
#define M_WPSystem_somCheckVersion SOMClass_somCheckVersion
#define M_WPSystem_somDescendedFrom SOMClass_somDescendedFrom
#define M_WPSystem_somSupportsMethod SOMClass_somSupportsMethod
#define M_WPSystem_somDefinedMethod SOMClass_somDefinedMethod
#define M_WPSystem_somOverrideMtab SOMClass_somOverrideMtab
#define M_WPSystem_somDefaultInit SOMObject_somDefaultInit
#define M_WPSystem_somDestruct SOMObject_somDestruct
#define M_WPSystem_somDefaultCopyInit SOMObject_somDefaultCopyInit
#define M_WPSystem_somDefaultAssign SOMObject_somDefaultAssign
#define M_WPSystem_somDefaultConstCopyInit SOMObject_somDefaultConstCopyInit
#define M_WPSystem_somDefaultVCopyInit SOMObject_somDefaultVCopyInit
#define M_WPSystem_somDefaultConstVCopyInit SOMObject_somDefaultConstVCopyInit
#define M_WPSystem_somDefaultConstAssign SOMObject_somDefaultConstAssign
#define M_WPSystem_somDefaultVAssign SOMObject_somDefaultVAssign
#define M_WPSystem_somDefaultConstVAssign SOMObject_somDefaultConstVAssign
#define M_WPSystem_somInit SOMObject_somInit
#define M_WPSystem_somFree SOMObject_somFree
#define M_WPSystem_somGetClass SOMObject_somGetClass
#define M_WPSystem_somGetClassName SOMObject_somGetClassName
#define M_WPSystem_somGetSize SOMObject_somGetSize
#define M_WPSystem_somIsA SOMObject_somIsA
#define M_WPSystem_somIsInstanceOf SOMObject_somIsInstanceOf
#define M_WPSystem_somRespondsTo SOMObject_somRespondsTo
#define M_WPSystem_somDispatch SOMObject_somDispatch
#define M_WPSystem_somClassDispatch SOMObject_somClassDispatch
#define M_WPSystem_somCastObj SOMObject_somCastObj
#define M_WPSystem_somResetObj SOMObject_somResetObj
#define M_WPSystem_somDispatchV SOMObject_somDispatchV
#define M_WPSystem_somDispatchL SOMObject_somDispatchL
#define M_WPSystem_somDispatchA SOMObject_somDispatchA
#define M_WPSystem_somDispatchD SOMObject_somDispatchD
#define M_WPSystem_somPrintSelf SOMObject_somPrintSelf
#define M_WPSystem_somDumpSelf SOMObject_somDumpSelf
#define M_WPSystem_somDumpSelfInt SOMObject_somDumpSelfInt
#endif /* SOM_DONT_USE_INHERITED_MACROS */

#endif       /* SOM_M_WPSystem_h */

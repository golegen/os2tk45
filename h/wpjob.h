
/*
 * This file was generated by the SOM Compiler.
 * FileName: G:\cwpsh\rel\os2c\include\base\os2\wpjob.h.
 * Generated using:
 *     SOM Precompiler somipc: 2.29.1.14
 *     SOM Emitter emith: 2.43
 */

/*
 *   Module Header
 * 
 *   Module Name: WPJOB
 * 
 *   OS/2 Presentation Manager Workplace class definitions
 * 
 *   Copyright (c) International Business Machines Corporation 1991, 1992
 * 
 */


#ifndef SOM_WPJob_h
#define SOM_WPJob_h


/*
 * Passthru lines: File: "C.h", "before"
 */

/* common context menu ids */
#define WPPOICM_JOB_MENU            5000
#define WPPOIDM_JOB_COPY            5001
#define WPPOIDM_JOB_DEL             5002
#define WPPOIDM_JOB_STATUS          5013
#define WPPOIDM_JOB_HOLD            5009
#define WPPOIDM_JOB_RELEASE         5008
#define WPPOIDM_JOB_STARTAGAIN      5006
#define WPPOIDM_JOB_PRINTNEXT       5007
#define WPPOICM_JOB_OPENMENU        5050
#define WPPOIDM_JOB_CONTENT         5011


#include <som.h>

/*
 * -- This emitter normally treats Method Tokens as Thunks,
 * -- but the sc modifier "nothunks" was used, so somResolve will be called.
 */
#undef somresolve_
#define somresolve_(obj,mToken) (somResolve(obj,mToken))

/*
 * Define the class name as an object type
 */
#ifndef WPJob
#define WPJob SOMObject
#endif
/*
 *  CLASS: WPJob
 * 
 *  CLASS HIERARCHY:
 *     SOMObject
 *       ��� WPObject
 *             ��� WPTransient
 *                   ��� WPJob
 * 
 *  DESCRIPTION:
 *     This is the job object class.
 *     An instance of this class is created by the Print Destination object
 *     in its icon or detail view.
 * 
 */
#include <wptrans.h>

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
#ifndef M_WPTransient
    #define M_WPTransient SOMObject
#endif /* M_WPTransient */
#ifndef WPPrinter
    #define WPPrinter SOMObject
#endif /* WPPrinter */
#ifndef M_WPJob
    #define M_WPJob SOMObject
#endif /* M_WPJob */

/*
 * End of bindings for IDL types.
 */

#define WPJob_MajorVersion 1
#define WPJob_MinorVersion 1

/*
 * External name shortening if required
 */
#ifdef SOM_USE_SHORT_EXTERNAL_NAMES
#define WPJobNewClass WPjobc
#define WPJobClassData WPjobd
#define WPJobCClassData WPjobx
#endif /* SOM_USE_SHORT_EXTERNAL_NAMES */

/*
 * Include the meta class file
 */
#include <wpjob.h>
/*--------------Migration------------*/
#define WPJob_classObj WPJobClassData.classObject
#define _WPJob WPJob_classObj

/*
 * Declare the class creation procedure
 */
SOMEXTERN SOMClass * SOMLINK WPJobNewClass(integer4 somtmajorVersion,
		integer4 somtminorVersion);

/*
 * Declare the class data structure
 */
SOMEXTERN struct WPJobClassDataStructure {
	SOMClass *classObject;
	somMToken prtGetJobID;
	somMToken prtSetJobID;
	somMToken prtGetJobInfo2;
	somMToken prtSetJobInfo2;
	somMToken prtGetJobInfo3;
	somMToken prtSetJobInfo3;
	somMToken prtFreeJobInfo2;
	somMToken prtFreeJobInfo3;
	somMToken prtGetPDObject;
	somMToken prtSetPDObject;
	somMToken prtGetDocument;
	somMToken prtSetDocument;
	somMToken prtDupJobInfo2;
	somMToken prtDupJobInfo3;
	somMToken wpDeleteJob;
	somMToken wpHoldJob;
	somMToken wpReleaseJob;
	somMToken wpPrintJobNext;
	somMToken wpStartJobAgain;
	somMToken wpQueryPrintObject;
	somMToken wpQueryJobId;
	somMToken wpQueryJobFile;
	somMToken wpQueryJobType;
	somMToken prtGetJobInfo4;
	somMToken prtSetJobInfo4;
	somMToken prtFreeJobInfo4;
	somMToken prtDupJobInfo4;
	somMToken wpMoveJobObject;
	somMToken prtSetOutputPortname;
	somMToken prtSetJobState;
	somMToken prtQueryJobState;
} SOMDLINK WPJobClassData;

/*
 * Declare the C specific class data structure
 */
SOMEXTERN struct WPJobCClassDataStructure {
	somMethodTabs parentMtab;
	somDToken instanceDataToken;
} SOMDLINK WPJobCClassData;

/*
 * New and Renew macros for WPJob
 */
#define WPJobNew() \
   ( _WPJob ? \
	_somNew(_WPJob) \
	: ( WPJobNewClass(\
		WPJob_MajorVersion, \
		WPJob_MinorVersion),\
	   _somNew(_WPJob)))
#define WPJobRenew(buf) \
   ( _WPJob ? \
	_somRenew(_WPJob, buf) \
	: ( WPJobNewClass(\
		WPJob_MajorVersion, \
		WPJob_MinorVersion),\
	   _somRenew(_WPJob, buf)))

/*
 * Override method: wpInitData
 */
#define WPJob_wpInitData(somSelf) \
	WPObject_wpInitData(somSelf)

/*
 * Override method: wpUnInitData
 */
#define WPJob_wpUnInitData(somSelf) \
	WPObject_wpUnInitData(somSelf)

/*
 * Override method: somDumpSelfInt
 */
#define WPJob_somDumpSelfInt(somSelf,level) \
	SOMObject_somDumpSelfInt(somSelf,level)

/*
 * Override method: wpAddSettingsPages
 */
#define WPJob_wpAddSettingsPages(somSelf,hwndNotebook) \
	WPObject_wpAddSettingsPages(somSelf,hwndNotebook)

/*
 * Override method: wpAddObjectGeneralPage
 */
#define WPJob_wpAddObjectGeneralPage(somSelf,hwndNotebook) \
	WPObject_wpAddObjectGeneralPage(somSelf,hwndNotebook)

/*
 * Override method: wpQueryTitle
 */
#define WPJob_wpQueryTitle(somSelf) \
	WPObject_wpQueryTitle(somSelf)

/*
 * Override method: wpQueryIcon
 */
#define WPJob_wpQueryIcon(somSelf) \
	WPObject_wpQueryIcon(somSelf)

/*
 * Override method: wpFilterPopupMenu
 */
#define WPJob_wpFilterPopupMenu(somSelf,ulFlags,hwndCnr,fMultiSelect) \
	WPObject_wpFilterPopupMenu(somSelf,ulFlags,hwndCnr,fMultiSelect)

/*
 * Override method: wpFree
 */
#define WPJob_wpFree(somSelf) \
	WPObject_wpFree(somSelf)

/*
 * Override method: wpConfirmDelete
 */
#define WPJob_wpConfirmDelete(somSelf,fConfirmations) \
	WPObject_wpConfirmDelete(somSelf,fConfirmations)

/*
 * Override method: wpModifyPopupMenu
 */
#define WPJob_wpModifyPopupMenu(somSelf,hwndMenu,hwndCnr,iPosition) \
	WPObject_wpModifyPopupMenu(somSelf,hwndMenu,hwndCnr,iPosition)

/*
 * Override method: wpMenuItemSelected
 */
#define WPJob_wpMenuItemSelected(somSelf,hwndFrame,ulMenuId) \
	WPObject_wpMenuItemSelected(somSelf,hwndFrame,ulMenuId)

/*
 * Override method: wpMenuItemHelpSelected
 */
#define WPJob_wpMenuItemHelpSelected(somSelf,MenuId) \
	WPObject_wpMenuItemHelpSelected(somSelf,MenuId)

/*
 * Override method: wpOpen
 */
#define WPJob_wpOpen(somSelf,hwndCnr,ulView,param) \
	WPObject_wpOpen(somSelf,hwndCnr,ulView,param)

/*
 * Override method: wpDrop
 */
#define WPJob_wpDrop(somSelf,hwndCnr,pdrgInfo,pdrgItem) \
	WPObject_wpDrop(somSelf,hwndCnr,pdrgInfo,pdrgItem)

/*
 * Override method: wpDragOver
 */
#define WPJob_wpDragOver(somSelf,hwndCnr,pdrgInfo) \
	WPObject_wpDragOver(somSelf,hwndCnr,pdrgInfo)

/*
 * Override method: wpPrintObject
 */
#define WPJob_wpPrintObject(somSelf,pPrintDest,ulReserved) \
	WPObject_wpPrintObject(somSelf,pPrintDest,ulReserved)

/*
 * Override method: wpQueryDetailsData
 */
#define WPJob_wpQueryDetailsData(somSelf,ppDetailsData,pcp) \
	WPObject_wpQueryDetailsData(somSelf,ppDetailsData,pcp)

/*
 * Override method: wpSetTitle
 */
#define WPJob_wpSetTitle(somSelf,pszNewTitle) \
	WPObject_wpSetTitle(somSelf,pszNewTitle)

/*
 * Override method: wpAddToObjUseList
 */
#define WPJob_wpAddToObjUseList(somSelf,pUseItem) \
	WPObject_wpAddToObjUseList(somSelf,pUseItem)

/*
 * Override method: wpDeleteFromObjUseList
 */
#define WPJob_wpDeleteFromObjUseList(somSelf,pUseItem) \
	WPObject_wpDeleteFromObjUseList(somSelf,pUseItem)

/*
 * New Method: wpDeleteJob
 */
typedef BOOL   SOMLINK somTP_WPJob_wpDeleteJob(WPJob *somSelf);
typedef somTP_WPJob_wpDeleteJob *somTD_WPJob_wpDeleteJob;
/*
 *  Delete a job object
 */
#define somMD_WPJob_wpDeleteJob "::WPJob::wpDeleteJob"
#define WPJob_wpDeleteJob(somSelf) \
    (SOM_Resolve(somSelf, WPJob, wpDeleteJob) \
	(somSelf))
#ifndef SOMGD_wpDeleteJob
    #if (defined(_wpDeleteJob) || defined(__wpDeleteJob))
        #undef _wpDeleteJob
        #undef __wpDeleteJob
        #define SOMGD_wpDeleteJob 1
    #else
        #define _wpDeleteJob WPJob_wpDeleteJob
    #endif /* _wpDeleteJob */
#endif /* SOMGD_wpDeleteJob */

/*
 * New Method: wpHoldJob
 */
typedef BOOL   SOMLINK somTP_WPJob_wpHoldJob(WPJob *somSelf);
typedef somTP_WPJob_wpHoldJob *somTD_WPJob_wpHoldJob;
/*
 *  Hold printing a job object
 */
#define somMD_WPJob_wpHoldJob "::WPJob::wpHoldJob"
#define WPJob_wpHoldJob(somSelf) \
    (SOM_Resolve(somSelf, WPJob, wpHoldJob) \
	(somSelf))
#ifndef SOMGD_wpHoldJob
    #if (defined(_wpHoldJob) || defined(__wpHoldJob))
        #undef _wpHoldJob
        #undef __wpHoldJob
        #define SOMGD_wpHoldJob 1
    #else
        #define _wpHoldJob WPJob_wpHoldJob
    #endif /* _wpHoldJob */
#endif /* SOMGD_wpHoldJob */

/*
 * New Method: wpReleaseJob
 */
typedef BOOL   SOMLINK somTP_WPJob_wpReleaseJob(WPJob *somSelf);
typedef somTP_WPJob_wpReleaseJob *somTD_WPJob_wpReleaseJob;
/*
 *  Release printing a job object
 */
#define somMD_WPJob_wpReleaseJob "::WPJob::wpReleaseJob"
#define WPJob_wpReleaseJob(somSelf) \
    (SOM_Resolve(somSelf, WPJob, wpReleaseJob) \
	(somSelf))
#ifndef SOMGD_wpReleaseJob
    #if (defined(_wpReleaseJob) || defined(__wpReleaseJob))
        #undef _wpReleaseJob
        #undef __wpReleaseJob
        #define SOMGD_wpReleaseJob 1
    #else
        #define _wpReleaseJob WPJob_wpReleaseJob
    #endif /* _wpReleaseJob */
#endif /* SOMGD_wpReleaseJob */

/*
 * New Method: wpPrintJobNext
 */
typedef BOOL   SOMLINK somTP_WPJob_wpPrintJobNext(WPJob *somSelf);
typedef somTP_WPJob_wpPrintJobNext *somTD_WPJob_wpPrintJobNext;
/*
 *  Move this job object to be printed next
 */
#define somMD_WPJob_wpPrintJobNext "::WPJob::wpPrintJobNext"
#define WPJob_wpPrintJobNext(somSelf) \
    (SOM_Resolve(somSelf, WPJob, wpPrintJobNext) \
	(somSelf))
#ifndef SOMGD_wpPrintJobNext
    #if (defined(_wpPrintJobNext) || defined(__wpPrintJobNext))
        #undef _wpPrintJobNext
        #undef __wpPrintJobNext
        #define SOMGD_wpPrintJobNext 1
    #else
        #define _wpPrintJobNext WPJob_wpPrintJobNext
    #endif /* _wpPrintJobNext */
#endif /* SOMGD_wpPrintJobNext */

/*
 * New Method: wpStartJobAgain
 */
typedef BOOL   SOMLINK somTP_WPJob_wpStartJobAgain(WPJob *somSelf);
typedef somTP_WPJob_wpStartJobAgain *somTD_WPJob_wpStartJobAgain;
/*
 *  Start the job again
 */
#define somMD_WPJob_wpStartJobAgain "::WPJob::wpStartJobAgain"
#define WPJob_wpStartJobAgain(somSelf) \
    (SOM_Resolve(somSelf, WPJob, wpStartJobAgain) \
	(somSelf))
#ifndef SOMGD_wpStartJobAgain
    #if (defined(_wpStartJobAgain) || defined(__wpStartJobAgain))
        #undef _wpStartJobAgain
        #undef __wpStartJobAgain
        #define SOMGD_wpStartJobAgain 1
    #else
        #define _wpStartJobAgain WPJob_wpStartJobAgain
    #endif /* _wpStartJobAgain */
#endif /* SOMGD_wpStartJobAgain */

/*
 * New Method: wpQueryPrintObject
 */
typedef WPObject*   SOMLINK somTP_WPJob_wpQueryPrintObject(WPJob *somSelf);
typedef somTP_WPJob_wpQueryPrintObject *somTD_WPJob_wpQueryPrintObject;
/*
 *  Return a pointer to the PrintObject this job is in.
 */
#define somMD_WPJob_wpQueryPrintObject "::WPJob::wpQueryPrintObject"
#define WPJob_wpQueryPrintObject(somSelf) \
    (SOM_Resolve(somSelf, WPJob, wpQueryPrintObject) \
	(somSelf))
#ifndef SOMGD_wpQueryPrintObject
    #if (defined(_wpQueryPrintObject) || defined(__wpQueryPrintObject))
        #undef _wpQueryPrintObject
        #undef __wpQueryPrintObject
        #define SOMGD_wpQueryPrintObject 1
    #else
        #define _wpQueryPrintObject WPJob_wpQueryPrintObject
    #endif /* _wpQueryPrintObject */
#endif /* SOMGD_wpQueryPrintObject */

/*
 * New Method: wpQueryJobId
 */
typedef ULONG   SOMLINK somTP_WPJob_wpQueryJobId(WPJob *somSelf);
typedef somTP_WPJob_wpQueryJobId *somTD_WPJob_wpQueryJobId;
/*
 *  Returns the JobId of this job
 */
#define somMD_WPJob_wpQueryJobId "::WPJob::wpQueryJobId"
#define WPJob_wpQueryJobId(somSelf) \
    (SOM_Resolve(somSelf, WPJob, wpQueryJobId) \
	(somSelf))
#ifndef SOMGD_wpQueryJobId
    #if (defined(_wpQueryJobId) || defined(__wpQueryJobId))
        #undef _wpQueryJobId
        #undef __wpQueryJobId
        #define SOMGD_wpQueryJobId 1
    #else
        #define _wpQueryJobId WPJob_wpQueryJobId
    #endif /* _wpQueryJobId */
#endif /* SOMGD_wpQueryJobId */

/*
 * New Method: wpQueryJobFile
 */
typedef BOOL   SOMLINK somTP_WPJob_wpQueryJobFile(WPJob *somSelf, 
		PSZ pBuf, 
		PULONG pcbBuf);
typedef somTP_WPJob_wpQueryJobFile *somTD_WPJob_wpQueryJobFile;
/*
 *  Return the spool file name in the pBuf
 */
#define somMD_WPJob_wpQueryJobFile "::WPJob::wpQueryJobFile"
#define WPJob_wpQueryJobFile(somSelf,pBuf,pcbBuf) \
    (SOM_Resolve(somSelf, WPJob, wpQueryJobFile) \
	(somSelf,pBuf,pcbBuf))
#ifndef SOMGD_wpQueryJobFile
    #if (defined(_wpQueryJobFile) || defined(__wpQueryJobFile))
        #undef _wpQueryJobFile
        #undef __wpQueryJobFile
        #define SOMGD_wpQueryJobFile 1
    #else
        #define _wpQueryJobFile WPJob_wpQueryJobFile
    #endif /* _wpQueryJobFile */
#endif /* SOMGD_wpQueryJobFile */

/*
 * New Method: wpQueryJobType
 */
typedef BOOL   SOMLINK somTP_WPJob_wpQueryJobType(WPJob *somSelf, 
		PSZ pBuf, 
		PULONG pcbBuf);
typedef somTP_WPJob_wpQueryJobType *somTD_WPJob_wpQueryJobType;
/*
 *  Return the job type int pBuf
 */
#define somMD_WPJob_wpQueryJobType "::WPJob::wpQueryJobType"
#define WPJob_wpQueryJobType(somSelf,pBuf,pcbBuf) \
    (SOM_Resolve(somSelf, WPJob, wpQueryJobType) \
	(somSelf,pBuf,pcbBuf))
#ifndef SOMGD_wpQueryJobType
    #if (defined(_wpQueryJobType) || defined(__wpQueryJobType))
        #undef _wpQueryJobType
        #undef __wpQueryJobType
        #define SOMGD_wpQueryJobType 1
    #else
        #define _wpQueryJobType WPJob_wpQueryJobType
    #endif /* _wpQueryJobType */
#endif /* SOMGD_wpQueryJobType */

/*
 * New Method: wpMoveJobObject
 */
typedef BOOL   SOMLINK somTP_WPJob_wpMoveJobObject(WPJob *somSelf, 
		WPPrinter* DestPrinter, 
		ULONG ulReserved);
typedef somTP_WPJob_wpMoveJobObject *somTD_WPJob_wpMoveJobObject;
#define somMD_WPJob_wpMoveJobObject "::WPJob::wpMoveJobObject"
#define WPJob_wpMoveJobObject(somSelf,DestPrinter,ulReserved) \
    (SOM_Resolve(somSelf, WPJob, wpMoveJobObject) \
	(somSelf,DestPrinter,ulReserved))
#ifndef SOMGD_wpMoveJobObject
    #if (defined(_wpMoveJobObject) || defined(__wpMoveJobObject))
        #undef _wpMoveJobObject
        #undef __wpMoveJobObject
        #define SOMGD_wpMoveJobObject 1
    #else
        #define _wpMoveJobObject WPJob_wpMoveJobObject
    #endif /* _wpMoveJobObject */
#endif /* SOMGD_wpMoveJobObject */
#ifndef SOM_DONT_USE_INHERITED_MACROS
#define WPJob_wpQueryHandle WPObject_wpQueryHandle
#define WPJob_wpCopyObject WPObject_wpCopyObject
#define WPJob_somDefaultInit SOMObject_somDefaultInit
#define WPJob_somDestruct SOMObject_somDestruct
#define WPJob_wpSaveImmediate WPObject_wpSaveImmediate
#define WPJob_wpIdentify WPObject_wpIdentify
#define WPJob_wpAddObjectGeneralPage2 WPObject_wpAddObjectGeneralPage2
#define WPJob_wpAddObjectWindowPage WPObject_wpAddObjectWindowPage
#define WPJob_wpAllocMem WPObject_wpAllocMem
#define WPJob_wpAppendObject WPObject_wpAppendObject
#define WPJob_wpAssertObjectMutexSem WPObject_wpAssertObjectMutexSem
#define WPJob_wpClose WPObject_wpClose
#define WPJob_wpCnrInsertObject WPObject_wpCnrInsertObject
#define WPJob_wpCnrRemoveObject WPObject_wpCnrRemoveObject
#define WPJob_wpCnrSetEmphasis WPObject_wpCnrSetEmphasis
#define WPJob_wpConfirmObjectTitle WPObject_wpConfirmObjectTitle
#define WPJob_wpCopiedFromTemplate WPObject_wpCopiedFromTemplate
#define WPJob_wpCreateAnother WPObject_wpCreateAnother
#define WPJob_wpCreateFromTemplate WPObject_wpCreateFromTemplate
#define WPJob_wpCreateShadowObject WPObject_wpCreateShadowObject
#define WPJob_wpDelete WPObject_wpDelete
#define WPJob_wpDisplayHelp WPObject_wpDisplayHelp
#define WPJob_wpDisplayMenu WPObject_wpDisplayMenu
#define WPJob_wpDoesObjectMatch WPObject_wpDoesObjectMatch
#define WPJob_wpDraggedOverObject WPObject_wpDraggedOverObject
#define WPJob_wpDroppedOnObject WPObject_wpDroppedOnObject
#define WPJob_wpEndConversation WPObject_wpEndConversation
#define WPJob_wpFilterMenu WPObject_wpFilterMenu
#define WPJob_wpFindUseItem WPObject_wpFindUseItem
#define WPJob_wpFormatDragItem WPObject_wpFormatDragItem
#define WPJob_wpFreeMem WPObject_wpFreeMem
#define WPJob_wpHide WPObject_wpHide
#define WPJob_wpInsertPopupMenuItems WPObject_wpInsertPopupMenuItems
#define WPJob_wpInsertMenuItems WPObject_wpInsertMenuItems
#define WPJob_wpInsertSettingsPage WPObject_wpInsertSettingsPage
#define WPJob_wpModifyMenu WPObject_wpModifyMenu
#define WPJob_wpMoveObject WPObject_wpMoveObject
#define WPJob_wpQueryConcurrentView WPObject_wpQueryConcurrentView
#define WPJob_wpQueryButtonAppearance WPObject_wpQueryButtonAppearance
#define WPJob_wpQueryConfirmations WPObject_wpQueryConfirmations
#define WPJob_wpQueryDefaultHelp WPObject_wpQueryDefaultHelp
#define WPJob_wpQueryDefaultView WPObject_wpQueryDefaultView
#define WPJob_wpQueryError WPObject_wpQueryError
#define WPJob_wpSetFolder WPObject_wpSetFolder
#define WPJob_wpQueryFolder WPObject_wpQueryFolder
#define WPJob_wpQueryIconData WPObject_wpQueryIconData
#define WPJob_wpQueryMinWindow WPObject_wpQueryMinWindow
#define WPJob_wpQueryNameClashOptions WPObject_wpQueryNameClashOptions
#define WPJob_wpQueryStyle WPObject_wpQueryStyle
#define WPJob_wpSetTaskRec WPObject_wpSetTaskRec
#define WPJob_wpFindTaskRec WPObject_wpFindTaskRec
#define WPJob_wpRegisterView WPObject_wpRegisterView
#define WPJob_wpReleaseObjectMutexSem WPObject_wpReleaseObjectMutexSem
#define WPJob_wpRender WPObject_wpRender
#define WPJob_wpRenderComplete WPObject_wpRenderComplete
#define WPJob_wpReplaceObject WPObject_wpReplaceObject
#define WPJob_wpRequestObjectMutexSem WPObject_wpRequestObjectMutexSem
#define WPJob_wpRestore WPObject_wpRestore
#define WPJob_wpRestoreData WPObject_wpRestoreData
#define WPJob_wpRestoreLong WPObject_wpRestoreLong
#define WPJob_wpRestoreState WPObject_wpRestoreState
#define WPJob_wpRestoreString WPObject_wpRestoreString
#define WPJob_wpSaveData WPObject_wpSaveData
#define WPJob_wpSaveDeferred WPObject_wpSaveDeferred
#define WPJob_wpSaveLong WPObject_wpSaveLong
#define WPJob_wpSaveState WPObject_wpSaveState
#define WPJob_wpSaveString WPObject_wpSaveString
#define WPJob_wpScanSetupString WPObject_wpScanSetupString
#define WPJob_wpSetConcurrentView WPObject_wpSetConcurrentView
#define WPJob_wpSetButtonAppearance WPObject_wpSetButtonAppearance
#define WPJob_wpSetDefaultHelp WPObject_wpSetDefaultHelp
#define WPJob_wpSetDefaultView WPObject_wpSetDefaultView
#define WPJob_wpSetError WPObject_wpSetError
#define WPJob_wpQueryScreenGroupID WPObject_wpQueryScreenGroupID
#define WPJob_wpSetupOnce WPObject_wpSetupOnce
#define WPJob_wpSetIcon WPObject_wpSetIcon
#define WPJob_wpSetIconData WPObject_wpSetIconData
#define WPJob_wpSetMinWindow WPObject_wpSetMinWindow
#define WPJob_wpModifyStyle WPObject_wpModifyStyle
#define WPJob_wpSetup WPObject_wpSetup
#define WPJob_wpSwitchTo WPObject_wpSwitchTo
#define WPJob_wpViewObject WPObject_wpViewObject
#define WPJob_wpQueryTrueStyle WPObject_wpQueryTrueStyle
#define WPJob_wpUnlockObject WPObject_wpUnlockObject
#define WPJob_wpObjectReady WPObject_wpObjectReady
#define WPJob_wpIsObjectInitialized WPObject_wpIsObjectInitialized
#define WPJob_wpCreateShadowObjectExt WPObject_wpCreateShadowObjectExt
#define WPJob_wpCnrDeleteUseItem WPObject_wpCnrDeleteUseItem
#define WPJob_wpIsDeleteable WPObject_wpIsDeleteable
#define WPJob_wpQueryCoreRecord WPObject_wpQueryCoreRecord
#define WPJob_wpSetObjectID WPObject_wpSetObjectID
#define WPJob_wpQueryObjectID WPObject_wpQueryObjectID
#define WPJob_wpSetDefaultIconPos WPObject_wpSetDefaultIconPos
#define WPJob_wpQueryDefaultIconPos WPObject_wpQueryDefaultIconPos
#define WPJob_wpCnrRefreshDetails WPObject_wpCnrRefreshDetails
#define WPJob_wpFindViewItem WPObject_wpFindViewItem
#define WPJob_wpLockObject WPObject_wpLockObject
#define WPJob_wpIsLocked WPObject_wpIsLocked
#define WPJob_wpQueryContainerFlagPtr WPObject_wpQueryContainerFlagPtr
#define WPJob_wpWaitForClose WPObject_wpWaitForClose
#define WPJob_wpSetMenuStyle WPObject_wpSetMenuStyle
#define WPJob_wpQueryMenuStyle WPObject_wpQueryMenuStyle
#define WPJob_wpSetStyle WPObject_wpSetStyle
#define WPJob_somInit SOMObject_somInit
#define WPJob_somUninit SOMObject_somUninit
#define WPJob_somDefaultCopyInit SOMObject_somDefaultCopyInit
#define WPJob_somDefaultAssign SOMObject_somDefaultAssign
#define WPJob_somDefaultConstCopyInit SOMObject_somDefaultConstCopyInit
#define WPJob_somDefaultVCopyInit SOMObject_somDefaultVCopyInit
#define WPJob_somDefaultConstVCopyInit SOMObject_somDefaultConstVCopyInit
#define WPJob_somDefaultConstAssign SOMObject_somDefaultConstAssign
#define WPJob_somDefaultVAssign SOMObject_somDefaultVAssign
#define WPJob_somDefaultConstVAssign SOMObject_somDefaultConstVAssign
#define WPJob_somFree SOMObject_somFree
#define WPJob_somGetClass SOMObject_somGetClass
#define WPJob_somGetClassName SOMObject_somGetClassName
#define WPJob_somGetSize SOMObject_somGetSize
#define WPJob_somIsA SOMObject_somIsA
#define WPJob_somIsInstanceOf SOMObject_somIsInstanceOf
#define WPJob_somRespondsTo SOMObject_somRespondsTo
#define WPJob_somDispatch SOMObject_somDispatch
#define WPJob_somClassDispatch SOMObject_somClassDispatch
#define WPJob_somCastObj SOMObject_somCastObj
#define WPJob_somResetObj SOMObject_somResetObj
#define WPJob_somDispatchV SOMObject_somDispatchV
#define WPJob_somDispatchL SOMObject_somDispatchL
#define WPJob_somDispatchA SOMObject_somDispatchA
#define WPJob_somDispatchD SOMObject_somDispatchD
#define WPJob_somPrintSelf SOMObject_somPrintSelf
#define WPJob_somDumpSelf SOMObject_somDumpSelf
#endif /* SOM_DONT_USE_INHERITED_MACROS */

#endif       /* SOM_WPJob_h */

#ifndef SOM_M_WPJob_h
#define SOM_M_WPJob_h


#include <som.h>

/*
 * -- This emitter normally treats Method Tokens as Thunks,
 * -- but the sc modifier "nothunks" was used, so somResolve will be called.
 */
#undef somresolve_
#define somresolve_(obj,mToken) (somResolve(obj,mToken))

/*
 * Define the class name as an object type
 */
#ifndef M_WPJob
#define M_WPJob SOMObject
#endif
#include <wptrans.h>

/*
 * Start of bindings for IDL types
 */


/*
 * End of bindings for IDL types.
 */

#define M_WPJob_MajorVersion 1
#define M_WPJob_MinorVersion 1

/*
 * External name shortening if required
 */
#ifdef SOM_USE_SHORT_EXTERNAL_NAMES
#define M_WPJobNewClass WPjobc
#define M_WPJobClassData WPjobd
#define M_WPJobCClassData WPjobx
#endif /* SOM_USE_SHORT_EXTERNAL_NAMES */
/*--------------Migration------------*/
#define M_WPJob_classObj M_WPJobClassData.classObject
#define _M_WPJob M_WPJob_classObj

/*
 * Declare the class creation procedure
 */
SOMEXTERN SOMClass * SOMLINK M_WPJobNewClass(integer4 somtmajorVersion,
		integer4 somtminorVersion);

/*
 * Declare the class data structure
 */
SOMEXTERN struct M_WPJobClassDataStructure {
	SOMClass *classObject;
	somMToken prtclsManageSelected;
} SOMDLINK M_WPJobClassData;

/*
 * Declare the C specific class data structure
 */
SOMEXTERN struct M_WPJobCClassDataStructure {
	somMethodTabs parentMtab;
	somDToken instanceDataToken;
} SOMDLINK M_WPJobCClassData;

/*
 * New and Renew macros for M_WPJob
 */
#define M_WPJobNew() \
   ( _M_WPJob ? \
	_somNew(_M_WPJob) \
	: ( M_WPJobNewClass(\
		M_WPJob_MajorVersion, \
		M_WPJob_MinorVersion),\
	   _somNew(_M_WPJob)))
#define M_WPJobRenew(buf) \
   ( _M_WPJob ? \
	_somRenew(_M_WPJob, buf) \
	: ( M_WPJobNewClass(\
		M_WPJob_MajorVersion, \
		M_WPJob_MinorVersion),\
	   _somRenew(_M_WPJob, buf)))

/*
 * Override method: wpclsQueryTitle
 */
#define M_WPJob_wpclsQueryTitle(somSelf) \
	M_WPObject_wpclsQueryTitle(somSelf)

/*
 * Override method: wpclsQueryIcon
 */
#define M_WPJob_wpclsQueryIcon(somSelf) \
	M_WPObject_wpclsQueryIcon(somSelf)

/*
 * Override method: wpclsQueryDefaultHelp
 */
#define M_WPJob_wpclsQueryDefaultHelp(somSelf,pHelpPanelId,pszHelpLibrary) \
	M_WPObject_wpclsQueryDefaultHelp(somSelf,pHelpPanelId,pszHelpLibrary)

/*
 * Override method: wpclsQueryDefaultView
 */
#define M_WPJob_wpclsQueryDefaultView(somSelf) \
	M_WPObject_wpclsQueryDefaultView(somSelf)

/*
 * Override method: wpclsQueryDetailsInfo
 */
#define M_WPJob_wpclsQueryDetailsInfo(somSelf,ppClassFieldInfo,pSize) \
	M_WPObject_wpclsQueryDetailsInfo(somSelf,ppClassFieldInfo,pSize)

/*
 * Override method: wpclsQueryStyle
 */
#define M_WPJob_wpclsQueryStyle(somSelf) \
	M_WPObject_wpclsQueryStyle(somSelf)
#ifndef SOM_DONT_USE_INHERITED_MACROS
#define M_WPJob_wpclsObjectFromHandle M_WPObject_wpclsObjectFromHandle
#define M_WPJob_wpclsCreateDefaultTemplates M_WPObject_wpclsCreateDefaultTemplates
#define M_WPJob_wpclsInitData M_WPObject_wpclsInitData
#define M_WPJob_wpclsMakeAwake M_WPObject_wpclsMakeAwake
#define M_WPJob_wpclsNew M_WPObject_wpclsNew
#define M_WPJob_wpclsQueryDetails M_WPObject_wpclsQueryDetails
#define M_WPJob_wpclsQueryExtendedCriteria M_WPObject_wpclsQueryExtendedCriteria
#define M_WPJob_wpclsQueryFolder M_WPObject_wpclsQueryFolder
#define M_WPJob_wpclsQuerySearchInfo M_WPObject_wpclsQuerySearchInfo
#define M_WPJob_wpclsUnInitData M_WPObject_wpclsUnInitData
#define M_WPJob_wpclsFindObjectFirst M_WPObject_wpclsFindObjectFirst
#define M_WPJob_wpclsFindObjectNext M_WPObject_wpclsFindObjectNext
#define M_WPJob_wpclsFindObjectEnd M_WPObject_wpclsFindObjectEnd
#define M_WPJob_wpclsSetError M_WPObject_wpclsSetError
#define M_WPJob_wpclsQueryError M_WPObject_wpclsQueryError
#define M_WPJob_wpclsQuerySettingsPageSize M_WPObject_wpclsQuerySettingsPageSize
#define M_WPJob_wpclsQueryIconData M_WPObject_wpclsQueryIconData
#define M_WPJob_wpclsQueryObject M_WPObject_wpclsQueryObject
#define M_WPJob_wpclsQueryButtonAppearance M_WPObject_wpclsQueryButtonAppearance
#define M_WPJob_wpclsDecUsage M_WPObject_wpclsDecUsage
#define M_WPJob_wpclsIncUsage M_WPObject_wpclsIncUsage
#define M_WPJob_wpclsInsertMultipleObjects M_WPObject_wpclsInsertMultipleObjects
#define M_WPJob_wpclsFindOneObject M_WPObject_wpclsFindOneObject
#define M_WPJob_wpclsSetSettingsPageSize M_WPObject_wpclsSetSettingsPageSize
#define M_WPJob_wpclsSetIconData M_WPObject_wpclsSetIconData
#define M_WPJob_wpclsSetIcon M_WPObject_wpclsSetIcon
#define M_WPJob_wpclsRemoveObjects M_WPObject_wpclsRemoveObjects
#define M_WPJob_somUninit SOMObject_somUninit
#define M_WPJob_somClassReady SOMClass_somClassReady
#define M_WPJob_somNew SOMClass_somNew
#define M_WPJob_somRenew SOMClass_somRenew
#define M_WPJob__get_somDataAlignment SOMClass__get_somDataAlignment
#define M_WPJob__get_somInstanceDataOffsets SOMClass__get_somInstanceDataOffsets
#define M_WPJob__get_somDirectInitClasses SOMClass__get_somDirectInitClasses
#define M_WPJob__set_somDirectInitClasses SOMClass__set_somDirectInitClasses
#define M_WPJob_somNewNoInit SOMClass_somNewNoInit
#define M_WPJob_somRenewNoInit SOMClass_somRenewNoInit
#define M_WPJob_somRenewNoZero SOMClass_somRenewNoZero
#define M_WPJob_somRenewNoInitNoZero SOMClass_somRenewNoInitNoZero
#define M_WPJob_somAllocate SOMClass_somAllocate
#define M_WPJob_somDeallocate SOMClass_somDeallocate
#define M_WPJob__get_somClassAllocate SOMClass__get_somClassAllocate
#define M_WPJob__get_somClassDeallocate SOMClass__get_somClassDeallocate
#define M_WPJob_somGetInstanceInitMask SOMClass_somGetInstanceInitMask
#define M_WPJob_somGetInstanceDestructionMask SOMClass_somGetInstanceDestructionMask
#define M_WPJob_somGetInstanceAssignmentMask SOMClass_somGetInstanceAssignmentMask
#define M_WPJob_somInitClass SOMClass_somInitClass
#define M_WPJob_somInitMIClass SOMClass_somInitMIClass
#define M_WPJob_somAddStaticMethod SOMClass_somAddStaticMethod
#define M_WPJob_somAddDynamicMethod SOMClass_somAddDynamicMethod
#define M_WPJob_somOverrideSMethod SOMClass_somOverrideSMethod
#define M_WPJob_somGetApplyStub SOMClass_somGetApplyStub
#define M_WPJob_somGetClassData SOMClass_somGetClassData
#define M_WPJob_somSetClassData SOMClass_somSetClassData
#define M_WPJob_somGetClassMtab SOMClass_somGetClassMtab
#define M_WPJob_somGetInstanceOffset SOMClass_somGetInstanceOffset
#define M_WPJob_somGetInstancePartSize SOMClass_somGetInstancePartSize
#define M_WPJob_somGetInstanceSize SOMClass_somGetInstanceSize
#define M_WPJob_somGetInstanceToken SOMClass_somGetInstanceToken
#define M_WPJob_somGetMemberToken SOMClass_somGetMemberToken
#define M_WPJob_somGetMethodData SOMClass_somGetMethodData
#define M_WPJob_somGetRdStub SOMClass_somGetRdStub
#define M_WPJob_somGetMethodDescriptor SOMClass_somGetMethodDescriptor
#define M_WPJob_somGetMethodIndex SOMClass_somGetMethodIndex
#define M_WPJob_somGetMethodToken SOMClass_somGetMethodToken
#define M_WPJob_somGetName SOMClass_somGetName
#define M_WPJob_somGetNthMethodData SOMClass_somGetNthMethodData
#define M_WPJob_somGetNthMethodInfo SOMClass_somGetNthMethodInfo
#define M_WPJob_somGetNumMethods SOMClass_somGetNumMethods
#define M_WPJob_somGetNumStaticMethods SOMClass_somGetNumStaticMethods
#define M_WPJob_somGetParent SOMClass_somGetParent
#define M_WPJob_somGetParents SOMClass_somGetParents
#define M_WPJob_somGetPClsMtab SOMClass_somGetPClsMtab
#define M_WPJob_somGetPClsMtabs SOMClass_somGetPClsMtabs
#define M_WPJob_somGetVersionNumbers SOMClass_somGetVersionNumbers
#define M_WPJob_somSetMethodDescriptor SOMClass_somSetMethodDescriptor
#define M_WPJob_somFindMethod SOMClass_somFindMethod
#define M_WPJob_somFindMethodOk SOMClass_somFindMethodOk
#define M_WPJob_somFindSMethod SOMClass_somFindSMethod
#define M_WPJob_somFindSMethodOk SOMClass_somFindSMethodOk
#define M_WPJob_somLookupMethod SOMClass_somLookupMethod
#define M_WPJob_somCheckVersion SOMClass_somCheckVersion
#define M_WPJob_somDescendedFrom SOMClass_somDescendedFrom
#define M_WPJob_somSupportsMethod SOMClass_somSupportsMethod
#define M_WPJob_somDefinedMethod SOMClass_somDefinedMethod
#define M_WPJob_somOverrideMtab SOMClass_somOverrideMtab
#define M_WPJob_somDefaultInit SOMObject_somDefaultInit
#define M_WPJob_somDestruct SOMObject_somDestruct
#define M_WPJob_somDefaultCopyInit SOMObject_somDefaultCopyInit
#define M_WPJob_somDefaultAssign SOMObject_somDefaultAssign
#define M_WPJob_somDefaultConstCopyInit SOMObject_somDefaultConstCopyInit
#define M_WPJob_somDefaultVCopyInit SOMObject_somDefaultVCopyInit
#define M_WPJob_somDefaultConstVCopyInit SOMObject_somDefaultConstVCopyInit
#define M_WPJob_somDefaultConstAssign SOMObject_somDefaultConstAssign
#define M_WPJob_somDefaultVAssign SOMObject_somDefaultVAssign
#define M_WPJob_somDefaultConstVAssign SOMObject_somDefaultConstVAssign
#define M_WPJob_somInit SOMObject_somInit
#define M_WPJob_somFree SOMObject_somFree
#define M_WPJob_somGetClass SOMObject_somGetClass
#define M_WPJob_somGetClassName SOMObject_somGetClassName
#define M_WPJob_somGetSize SOMObject_somGetSize
#define M_WPJob_somIsA SOMObject_somIsA
#define M_WPJob_somIsInstanceOf SOMObject_somIsInstanceOf
#define M_WPJob_somRespondsTo SOMObject_somRespondsTo
#define M_WPJob_somDispatch SOMObject_somDispatch
#define M_WPJob_somClassDispatch SOMObject_somClassDispatch
#define M_WPJob_somCastObj SOMObject_somCastObj
#define M_WPJob_somResetObj SOMObject_somResetObj
#define M_WPJob_somDispatchV SOMObject_somDispatchV
#define M_WPJob_somDispatchL SOMObject_somDispatchL
#define M_WPJob_somDispatchA SOMObject_somDispatchA
#define M_WPJob_somDispatchD SOMObject_somDispatchD
#define M_WPJob_somPrintSelf SOMObject_somPrintSelf
#define M_WPJob_somDumpSelf SOMObject_somDumpSelf
#define M_WPJob_somDumpSelfInt SOMObject_somDumpSelfInt
#endif /* SOM_DONT_USE_INHERITED_MACROS */

#endif       /* SOM_M_WPJob_h */
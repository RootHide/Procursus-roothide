/*
 This file is part of Darling.

 Copyright (C) 2019 Lubos Dolezel

 Darling is free software: you can redistribute it and/or modify
 it under the terms of the GNU General Public License as published by
 the Free Software Foundation, either version 3 of the License, or
 (at your option) any later version.

 Darling is distributed in the hope that it will be useful,
 but WITHOUT ANY WARRANTY; without even the implied warranty of
 MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
 GNU General Public License for more details.

 You should have received a copy of the GNU General Public License
 along with Darling.  If not, see <http://www.gnu.org/licenses/>.
*/


#ifndef _QTKit_H_
#define _QTKit_H_

#import <Foundation/Foundation.h>

#import <QTKit/ModernizerXPCProtocol.h>
#import <QTKit/NSUserInterfaceValidations.h>
#import <QTKit/QTCaptureOperationDescriptor.h>
#import <QTKit/QTHUDTimelineCellDelegate.h>
#import <QTKit/QTImageConsumer.h>
#import <QTKit/QTImageConsumerDelegateHelper.h>
#import <QTKit/QTImageConsumerVendor.h>
#import <QTKit/QTMovieAttributes.h>
#import <QTKit/QTTrackAttributes.h>
#import <QTKit/StandardMovieUIInterface.h>
#import <QTKit/QTAudioCompressionOptions.h>
#import <QTKit/QTCompressionOptionsInternal.h>
#import <QTKit/QTCompressionOptions.h>
#import <QTKit/QTDataReferenceEnumerator.h>
#import <QTKit/QTFormatDescriptionInternal.h>
#import <QTKit/QTFormatDescription.h>
#import <QTKit/QTSampleBufferInternal.h>
#import <QTKit/QTSampleBuffer.h>
#import <QTKit/QTTimeValue.h>
#import <QTKit/QTVideoCompressionOptions.h>
#import <QTKit/QTHotspot.h>
#import <QTKit/QTHotspotEnumerator.h>
#import <QTKit/QTMovieAttributeProps.h>
#import <QTKit/QTMovie.h>
#import <QTKit/QTMovie_FigMedia_TimelyCaller.h>
#import <QTKit/QTMovie_FigMedia_OccasionalCaller.h>
#import <QTKit/QTMovie_FigMedia.h>
#import <QTKit/QTMovieMediaHelper.h>
#import <QTKit/QTMovieUndoOperation.h>
#import <QTKit/QTNode.h>
#import <QTKit/QTNodeEnumerator.h>
#import <QTKit/QTStream.h>
#import <QTKit/QTStreamEnumerator.h>
#import <QTKit/QTTrack.h>
#import <QTKit/QTTrack_FigMedia.h>
#import <QTKit/QTTrack_QuickTime.h>
#import <QTKit/QTTrackEnumerator.h>
#import <QTKit/QTTrackHelper.h>
#import <QTKit/QTBackgroundQueueThreadInfoInternal.h>
#import <QTKit/QTBackgroundQueue.h>
#import <QTKit/QTCallbackRegistry.h>
#import <QTKit/QTMediaKeys.h>
#import <QTKit/QTResolvedDecompressionOptions.h>
#import <QTKit/QTUtilities.h>
#import <QTKit/QTVideoRendererWebKitOnly.h>
#import <QTKit/QTClassicMovieControllerViewNeedsDisplayData.h>
#import <QTKit/QTClassicMovieControllerView.h>
#import <QTKit/QTMovieControllerView.h>
#import <QTKit/QTMovieViewInternal.h>
#import <QTKit/QTMovieViewDragHighlightOverlayView.h>
#import <QTKit/QTMovieView.h>
#import <QTKit/QTCaptureDeviceInputInternal.h>
#import <QTKit/QTCaptureDeviceInput.h>
#import <QTKit/QTCaptureAudioPreviewOutputInternal.h>
#import <QTKit/QTCaptureAudioPreviewOutput.h>
#import <QTKit/QTCaptureVideoPreviewOutputCallbackData.h>
#import <QTKit/QTCaptureVideoPreviewOutputInternal.h>
#import <QTKit/QTCaptureVideoPreviewOutput.h>
#import <QTKit/QTCaptureViewInternal.h>
#import <QTKit/QTCaptureView.h>
#import <QTKit/QTCaptureFileOutputInternal.h>
#import <QTKit/QTCaptureFileOutput.h>
#import <QTKit/QTCaptureFileOutputRecordingOperationDescriptor.h>
#import <QTKit/QTCaptureFileOutputPauseOperationDescriptor.h>
#import <QTKit/QTCaptureMovieFileOutputInternal.h>
#import <QTKit/QTCaptureMovieFileOutput.h>
#import <QTKit/QTCaptureDecompressedVideoOutputCallbackData.h>
#import <QTKit/QTCaptureDecompressedVideoOutputInternal.h>
#import <QTKit/QTCaptureDecompressedVideoOutput.h>
#import <QTKit/QTCaptureDecompressedAudioOutputCallbackData.h>
#import <QTKit/QTCaptureDecompressedAudioOutputInternal.h>
#import <QTKit/QTCaptureDecompressedAudioOutput.h>
#import <QTKit/QTCaptureScreenInputInternal.h>
#import <QTKit/QTCaptureScreenInput.h>
#import <QTKit/QTMovieModernizerInternal.h>
#import <QTKit/QTMovieModernizer.h>
#import <QTKit/QTMovieModernizerTrack.h>
#import <QTKit/QTMovieModernizerPassthroughTrack.h>
#import <QTKit/QTMovieModernizerLegacyQTTrackPassthrough.h>
#import <QTKit/QTMovieModernizerLegacyQTTrack.h>
#import <QTKit/QTMovieModernizerLegacyMP3Track.h>
#import <QTKit/QTMovieLayerPrivate.h>
#import <QTKit/QTMovieLayer.h>
#import <QTKit/QTMediaIOGraphNodeList.h>
#import <QTKit/QTMediaIOGraphUnitDescription.h>
#import <QTKit/QTCaptureOperationDescriptorQueueItem.h>
#import <QTKit/QTCaptureOperationDescriptorQueue.h>
#import <QTKit/QTCaptureDALDevice.h>
#import <QTKit/QTCaptureDeviceInternal.h>
#import <QTKit/QTCaptureDevice.h>
#import <QTKit/QTCaptureHALDevice.h>
#import <QTKit/QTCaptureVideoPreviewRenderHelper.h>
#import <QTKit/QTCaptureConnectionInternal.h>
#import <QTKit/QTCaptureConnection.h>
#import <QTKit/QTCaptureInput.h>
#import <QTKit/QTCaptureOutput.h>
#import <QTKit/QTCaptureSessionInternal.h>
#import <QTKit/QTCaptureSessionInternalState.h>
#import <QTKit/QTCaptureSession.h>
#import <QTKit/QTCaptureLayerPrivate.h>
#import <QTKit/QTCaptureLayer.h>
#import <QTKit/QTWeakReference.h>
#import <QTKit/QTGarbageCollectedWeakReference.h>
#import <QTKit/QTRetainReleaseWeakReference.h>
#import <QTKit/QTPixelBufferConverter.h>
#import <QTKit/QTImageBufferConformer.h>
#import <QTKit/QTImageBufferQueue.h>
#import <QTKit/QTFigTimeImageQueue.h>
#import <QTKit/QTRunLoopSchedulingSetCallbackInfo.h>
#import <QTKit/QTRunLoopSchedulingSet.h>
#import <QTKit/QTGraphicsDevice.h>
#import <QTKit/QTConcreteGraphicsDevice.h>
#import <QTKit/QTOpenGLContext.h>
#import <QTKit/QTOpenGLTextureTile.h>
#import <QTKit/QTOpenGLTexture.h>
#import <QTKit/QTOpenGLTextureCache.h>
#import <QTKit/QTOpenGLTextureCacheTextureTile.h>
#import <QTKit/QTOpenGLTextureCacheTexture.h>
#import <QTKit/QTImageConsumerFanOut.h>
#import <QTKit/QTFigVisualContextImageProviderInternal.h>
#import <QTKit/QTFigVisualContextImageProvider.h>
#import <QTKit/QTLogRenderer.h>
#import <QTKit/QTCALayerRendererState.h>
#import <QTKit/QTCALayerRenderer.h>
#import <QTKit/QTCAImageQueueBoss.h>
#import <QTKit/QTCGContextRendererInternal.h>
#import <QTKit/QTCGContextRenderer.h>
#import <QTKit/QTSurfaceRendererTileDescription.h>
#import <QTKit/QTSurfaceRenderer.h>
#import <QTKit/QTSurfaceRendererTile.h>
#import <QTKit/QTSurfaceRendererAcceleratedTile.h>
#import <QTKit/QTSurfaceRendererSoftwareTile.h>
#import <QTKit/QTIMAVManagerImageConsumer.h>
#import <QTKit/QTSurfaceRendererIntermediateDelegateRenderer.h>
#import <QTKit/QTMovieFigVisualContextRenderHelper.h>
#import <QTKit/QTMovieGWorldRendererViewStubImageConsumer.h>
#import <QTKit/QTMovieGWorldRendererView.h>
#import <QTKit/QTMovieViewCGContextRendererView.h>
#import <QTKit/QTMovieViewSurfaceRendererView.h>
#import <QTKit/StdMovieUIController.h>
#import <QTKit/QTKitMovieControllerView.h>
#import <QTKit/StdMovieUIButton.h>
#import <QTKit/StdMovieUIVolumeButton.h>
#import <QTKit/StdMovieUIPlayPauseButton.h>
#import <QTKit/StdMovieUICustomMenuButton.h>
#import <QTKit/StdMovieUIFastButton.h>
#import <QTKit/StdMovieUIFastButtonCell.h>
#import <QTKit/StdMovieUISlider.h>
#import <QTKit/StdMovieUISliderCell.h>
#import <QTKit/StdMovieUITextItem.h>
#import <QTKit/StdMovieUIChapterPopup.h>
#import <QTKit/StdMovieUIVolumeSliderPopupView.h>
#import <QTKit/QTMoviePlaybackController.h>
#import <QTKit/QTHUDTimeFormatter.h>
#import <QTKit/QTHUDBackgroundView.h>
#import <QTKit/QTHUDButton.h>
#import <QTKit/QTHUDButtonCell.h>
#import <QTKit/QTHUDGroupViewItem.h>
#import <QTKit/QTHUDGroupView.h>
#import <QTKit/QTHUDSlider.h>
#import <QTKit/QTHUDSliderCell.h>
#import <QTKit/QTHUDTimeline.h>
#import <QTKit/QTHUDTimelineCell.h>
#import <QTKit/QTClosedCaptionLayer.h>
#import <QTKit/QTClosedCaptionRenderer.h>
#import <QTKit/QTSubtitleLayer.h>
#import <QTKit/QTSubtitleRenderer.h>
#import <QTKit/QTDataReference.h>
#import <QTKit/QTMovie_QuickTime.h>
#import <QTKit/QTKitServerController.h>
#import <QTKit/QTMedia.h>
#import <QTKit/QTNotificationListenerThreadData.h>
#import <QTKit/QTNotificationController.h>
#import <QTKit/QTDelegateListenerThreadData.h>
#import <QTKit/QTDelegateController.h>
#import <QTKit/QTMachPortImageProviderData.h>
#import <QTKit/QTMachPortImageProvider.h>
#import <QTKit/QTMovieMachPortRenderHelper.h>
#import <QTKit/QTRemoteCVImageBufferUnarchiver.h>
#import <QTKit/QTCALayerRendererView.h>
#import <QTKit/QTCALayerRendererViewBackingLayer.h>
#import <QTKit/QTCGContextRendererView.h>
#import <QTKit/QTSurfaceRendererView.h>
#import <QTKit/QTKeyedArchiverDelegate.h>
#import <QTKit/QTMoviePlaybackControllerMovieProxy.h>
#import <QTKit/QTMoviePlaybackControllerSelection.h>
#import <QTKit/QTKeyValueProxy.h>
#import <QTKit/QTHUDTimerNonRetainedTarget.h>
#import <QTKit/QTMoviePlaybackControllerTimeValue.h>
#import <QTKit/QTMovie_AsyncLoadHelper.h>
#import <QTKit/QTMovieViewCALayerRendererView.h>
#import <QTKit/QTMovieVideoProviderImageConsumer.h>
#import <QTKit/QTMovieVideoProviderQuartzComposerOnly.h>
#import <QTKit/QTHUDPopUpButton.h>
#import <QTKit/QTHUDPopUpButtonCellButtonCell.h>
#import <QTKit/QTHUDPopUpButtonCell.h>
#import <QTKit/QTHUDContainerView.h>
#import <QTKit/QTInvalidationSet.h>
#import <QTKit/QTExportSessionInternal.h>
#import <QTKit/QTExportSession.h>
#import <QTKit/QTExportOptionsInternal.h>
#import <QTKit/QTExportOptions.h>
#import <QTKit/QTMutableExportOptions.h>
#import <QTKit/QTHUDRemoteIndicatorView.h>
#import <QTKit/QTMetadataItemInternal.h>
#import <QTKit/QTMetadataItem.h>
#import <QTKit/QTMutableMetadataItem.h>
#import <QTKit/QTHUDMediaTimelineRangeMarker.h>
#import <QTKit/QTHUDMediaTimelineTrack.h>
#import <QTKit/QTHUDMediaTimelineTrackPreview.h>
#import <QTKit/QTHUDMediaTimelineTracksView.h>
#import <QTKit/QTHUDMediaTimelineView.h>
#import <QTKit/QTHUDDetentFunction.h>

void* QTEqualTimeRanges(void);
void* QTErrorFromOSStatus(void);
void* QTGetComponentsFromFloatTime(void);
void* QTGetComponentsFromRationalTime(void);
void* QTGetResolvedImageConsumerAttributes(void);
void* QTGetTimeInterval(void);
void* QTGetTimeRecord(void);
void* QTIntersectionTimeRange(void);
void* QTKitCanUseIOSurface(void);
void* QTLocalizedStringFromErrorCode(void);
void* QTLocalizedStringFromKey(void);
void* QTLocalizedStringFromTable(void);
void* QTMakeTime(void);
void* QTMakeTimeRange(void);
void* QTMakeTimeScaled(void);
void* QTMakeTimeWithTimeInterval(void);
void* QTMakeTimeWithTimeRecord(void);
void* QTMediaTypeStringForOSType(void);
void* QTOSTypeForString(void);
void* QTSetThreadName(void);
void* QTStringForOSType(void);
void* QTStringFromSMPTETime(void);
void* QTStringFromTime(void);
void* QTStringFromTimeRange(void);
void* QTTimeCompare(void);
void* QTTimeDecrement(void);
void* QTTimeFormatterCopyProperty(void);
void* QTTimeFormatterCreate(void);
void* QTTimeFormatterCreateStringFromFloatTime(void);
void* QTTimeFormatterCreateStringFromRationalTime(void);
void* QTTimeFormatterGetFloatTimeFromString(void);
void* QTTimeFormatterGetLocale(void);
void* QTTimeFormatterGetRationalTimeFromString(void);
void* QTTimeFormatterGetTypeID(void);
void* QTTimeFormatterSetProperty(void);
void* QTTimeFromString(void);
void* QTTimeInTimeRange(void);
void* QTTimeIncrement(void);
void* QTTimeIsIndefinite(void);
void* QTTimeRangeEnd(void);
void* QTTimeRangeFromString(void);
void* QTUICopyMeasurements(void);
void* QTUIDraw(void);
void* QTUIHitTest(void);
void* QTUnionTimeRange(void);

#endif

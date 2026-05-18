# The toplevel directory of the source tree.
#
MY_TARGET = libaria2

ROOT = ..\..\..
!include "$(ROOT)\system.mak"

TOP = .

HHEADERS = aria2.h config.h common.h

OBJECTS =  \
        $(OBJD)\libaria2\A2STR.obj \
        $(OBJD)\libaria2\AbstractAuthResolver.obj \
        $(OBJD)\libaria2\AbstractBtMessage.obj \
        $(OBJD)\libaria2\AbstractCommand.obj \
        $(OBJD)\libaria2\AbstractDiskWriter.obj \
        $(OBJD)\libaria2\AbstractHttpServerResponseCommand.obj \
        $(OBJD)\libaria2\AbstractOptionHandler.obj \
        $(OBJD)\libaria2\AbstractProxyRequestCommand.obj \
        $(OBJD)\libaria2\AbstractProxyResponseCommand.obj \
        $(OBJD)\libaria2\AbstractSingleDiskAdaptor.obj \
        $(OBJD)\libaria2\ActivePeerConnectionCommand.obj \
        $(OBJD)\libaria2\AdaptiveFileAllocationIterator.obj \
        $(OBJD)\libaria2\AdaptiveURISelector.obj \
        $(OBJD)\libaria2\Adler32MessageDigestImpl.obj \
        $(OBJD)\libaria2\AnnounceList.obj \
        $(OBJD)\libaria2\AnnounceTier.obj \
        $(OBJD)\libaria2\AsyncNameResolver.obj \
        $(OBJD)\libaria2\AsyncNameResolverMan.obj \
        $(OBJD)\libaria2\AuthConfig.obj \
        $(OBJD)\libaria2\AuthConfigFactory.obj \
        $(OBJD)\libaria2\AutoSaveCommand.obj \
        $(OBJD)\libaria2\BackupIPv4ConnectCommand.obj \
        $(OBJD)\libaria2\base32.obj \
        $(OBJD)\libaria2\bencode2.obj \
        $(OBJD)\libaria2\BencodeParser.obj \
        $(OBJD)\libaria2\bitfield.obj \
        $(OBJD)\libaria2\BitfieldMan.obj \
        $(OBJD)\libaria2\bittorrent_helper.obj \
        $(OBJD)\libaria2\BtAbortOutstandingRequestEvent.obj \
        $(OBJD)\libaria2\BtAllowedFastMessage.obj \
        $(OBJD)\libaria2\BtAnnounce.obj \
        $(OBJD)\libaria2\BtBitfieldMessage.obj \
        $(OBJD)\libaria2\BtBitfieldMessageValidator.obj \
        $(OBJD)\libaria2\BtCancelMessage.obj \
        $(OBJD)\libaria2\BtCheckIntegrityEntry.obj \
        $(OBJD)\libaria2\BtChokeMessage.obj \
        $(OBJD)\libaria2\BtDependency.obj \
        $(OBJD)\libaria2\BtExtendedMessage.obj \
        $(OBJD)\libaria2\BtFileAllocationEntry.obj \
        $(OBJD)\libaria2\BtHandshakeMessage.obj \
        $(OBJD)\libaria2\BtHandshakeMessageValidator.obj \
        $(OBJD)\libaria2\BtHaveAllMessage.obj \
        $(OBJD)\libaria2\BtHaveMessage.obj \
        $(OBJD)\libaria2\BtHaveNoneMessage.obj \
        $(OBJD)\libaria2\BtInterestedMessage.obj \
        $(OBJD)\libaria2\BtKeepAliveMessage.obj \
        $(OBJD)\libaria2\BtLeecherStateChoke.obj \
        $(OBJD)\libaria2\BtNotInterestedMessage.obj \
        $(OBJD)\libaria2\BtPieceMessage.obj \
        $(OBJD)\libaria2\BtPieceMessageValidator.obj \
        $(OBJD)\libaria2\BtPortMessage.obj \
        $(OBJD)\libaria2\BtPostDownloadHandler.obj \
        $(OBJD)\libaria2\BtRegistry.obj \
        $(OBJD)\libaria2\BtRejectMessage.obj \
        $(OBJD)\libaria2\BtRequestMessage.obj \
        $(OBJD)\libaria2\BtRuntime.obj \
        $(OBJD)\libaria2\BtSeederStateChoke.obj \
        $(OBJD)\libaria2\BtSetup.obj \
        $(OBJD)\libaria2\BtStopDownloadCommand.obj \
        $(OBJD)\libaria2\BtSuggestPieceMessage.obj \
        $(OBJD)\libaria2\BtUnchokeMessage.obj \
        $(OBJD)\libaria2\BufferedFile.obj \
        $(OBJD)\libaria2\ByteArrayDiskWriter.obj \
        $(OBJD)\libaria2\CheckIntegrityCommand.obj \
        $(OBJD)\libaria2\CheckIntegrityDispatcherCommand.obj \
        $(OBJD)\libaria2\CheckIntegrityEntry.obj \
        $(OBJD)\libaria2\Checksum.obj \
        $(OBJD)\libaria2\ChecksumCheckIntegrityEntry.obj \
        $(OBJD)\libaria2\ChunkChecksum.obj \
        $(OBJD)\libaria2\ChunkedDecodingStreamFilter.obj \
        $(OBJD)\libaria2\ColorizedStream.obj \
        $(OBJD)\libaria2\Command.obj \
        $(OBJD)\libaria2\ConnectCommand.obj \
        $(OBJD)\libaria2\console.obj \
        $(OBJD)\libaria2\ConsoleStatCalc.obj \
        $(OBJD)\libaria2\ContentTypeRequestGroupCriteria.obj \
        $(OBJD)\libaria2\Context.obj \
        $(OBJD)\libaria2\ContextAttribute.obj \
        $(OBJD)\libaria2\Cookie.obj \
        $(OBJD)\libaria2\CookieStorage.obj \
        $(OBJD)\libaria2\cookie_helper.obj \
        $(OBJD)\libaria2\CreateRequestCommand.obj \
        $(OBJD)\libaria2\crypto_hash.obj \
        $(OBJD)\libaria2\CUIDCounter.obj \
        $(OBJD)\libaria2\daemon.obj \
        $(OBJD)\libaria2\DefaultAuthResolver.obj \
        $(OBJD)\libaria2\DefaultBtAnnounce.obj \
        $(OBJD)\libaria2\DefaultBtInteractive.obj \
        $(OBJD)\libaria2\DefaultBtMessageDispatcher.obj \
        $(OBJD)\libaria2\DefaultBtMessageFactory.obj \
        $(OBJD)\libaria2\DefaultBtMessageReceiver.obj \
        $(OBJD)\libaria2\DefaultBtProgressInfoFile.obj \
        $(OBJD)\libaria2\DefaultBtRequestFactory.obj \
        $(OBJD)\libaria2\DefaultDiskWriter.obj \
        $(OBJD)\libaria2\DefaultDiskWriterFactory.obj \
        $(OBJD)\libaria2\DefaultExtensionMessageFactory.obj \
        $(OBJD)\libaria2\DefaultPeerStorage.obj \
        $(OBJD)\libaria2\DefaultPieceStorage.obj \
        $(OBJD)\libaria2\DefaultStreamPieceSelector.obj \
        $(OBJD)\libaria2\DHTAbstractMessage.obj \
        $(OBJD)\libaria2\DHTAbstractTask.obj \
        $(OBJD)\libaria2\DHTAnnouncePeerMessage.obj \
        $(OBJD)\libaria2\DHTAnnouncePeerReplyMessage.obj \
        $(OBJD)\libaria2\DHTAutoSaveCommand.obj \
        $(OBJD)\libaria2\DHTBucket.obj \
        $(OBJD)\libaria2\DHTBucketRefreshCommand.obj \
        $(OBJD)\libaria2\DHTBucketRefreshTask.obj \
        $(OBJD)\libaria2\DHTBucketTree.obj \
        $(OBJD)\libaria2\DHTConnectionImpl.obj \
        $(OBJD)\libaria2\DHTEntryPointNameResolveCommand.obj \
        $(OBJD)\libaria2\DHTFindNodeMessage.obj \
        $(OBJD)\libaria2\DHTFindNodeReplyMessage.obj \
        $(OBJD)\libaria2\DHTGetPeersCommand.obj \
        $(OBJD)\libaria2\DHTGetPeersMessage.obj \
        $(OBJD)\libaria2\DHTGetPeersReplyMessage.obj \
        $(OBJD)\libaria2\DHTInteractionCommand.obj \
        $(OBJD)\libaria2\DHTMessage.obj \
        $(OBJD)\libaria2\DHTMessageDispatcherImpl.obj \
        $(OBJD)\libaria2\DHTMessageEntry.obj \
        $(OBJD)\libaria2\DHTMessageFactoryImpl.obj \
        $(OBJD)\libaria2\DHTMessageReceiver.obj \
        $(OBJD)\libaria2\DHTMessageTracker.obj \
        $(OBJD)\libaria2\DHTMessageTrackerEntry.obj \
        $(OBJD)\libaria2\DHTNode.obj \
        $(OBJD)\libaria2\DHTNodeLookupEntry.obj \
        $(OBJD)\libaria2\DHTNodeLookupTask.obj \
        $(OBJD)\libaria2\DHTNodeLookupTaskCallback.obj \
        $(OBJD)\libaria2\DHTPeerAnnounceCommand.obj \
        $(OBJD)\libaria2\DHTPeerAnnounceEntry.obj \
        $(OBJD)\libaria2\DHTPeerAnnounceStorage.obj \
        $(OBJD)\libaria2\DHTPeerLookupTask.obj \
        $(OBJD)\libaria2\DHTPeerLookupTaskCallback.obj \
        $(OBJD)\libaria2\DHTPingMessage.obj \
        $(OBJD)\libaria2\DHTPingReplyMessage.obj \
        $(OBJD)\libaria2\DHTPingTask.obj \
        $(OBJD)\libaria2\DHTQueryMessage.obj \
        $(OBJD)\libaria2\DHTRegistry.obj \
        $(OBJD)\libaria2\DHTReplaceNodeTask.obj \
        $(OBJD)\libaria2\DHTResponseMessage.obj \
        $(OBJD)\libaria2\DHTRoutingTable.obj \
        $(OBJD)\libaria2\DHTRoutingTableDeserializer.obj \
        $(OBJD)\libaria2\DHTRoutingTableSerializer.obj \
        $(OBJD)\libaria2\DHTSetup.obj \
        $(OBJD)\libaria2\DHTTaskExecutor.obj \
        $(OBJD)\libaria2\DHTTaskFactoryImpl.obj \
        $(OBJD)\libaria2\DHTTaskQueueImpl.obj \
        $(OBJD)\libaria2\DHTTokenTracker.obj \
        $(OBJD)\libaria2\DHTTokenUpdateCommand.obj \
        $(OBJD)\libaria2\DHTUnknownMessage.obj \
        $(OBJD)\libaria2\DirectDiskAdaptor.obj \
        $(OBJD)\libaria2\DiskAdaptor.obj \
        $(OBJD)\libaria2\DlAbortEx.obj \
        $(OBJD)\libaria2\DlRetryEx.obj \
        $(OBJD)\libaria2\DNSCache.obj \
        $(OBJD)\libaria2\DownloadCommand.obj \
        $(OBJD)\libaria2\DownloadContext.obj \
        $(OBJD)\libaria2\DownloadEngine.obj \
        $(OBJD)\libaria2\DownloadEngineFactory.obj \
        $(OBJD)\libaria2\DownloadFailureException.obj \
        $(OBJD)\libaria2\DownloadHandler.obj \
        $(OBJD)\libaria2\DownloadHandlerConstants.obj \
        $(OBJD)\libaria2\DownloadResult.obj \
        $(OBJD)\libaria2\download_handlers.obj \
        $(OBJD)\libaria2\download_helper.obj \
        $(OBJD)\libaria2\EvictSocketPoolCommand.obj \
        $(OBJD)\libaria2\Exception.obj \
        $(OBJD)\libaria2\ExpatXmlParser.obj \
        $(OBJD)\libaria2\ExtensionMessageRegistry.obj \
        $(OBJD)\libaria2\FallocFileAllocationIterator.obj \
        $(OBJD)\libaria2\FatalException.obj \
        $(OBJD)\libaria2\FeatureConfig.obj \
        $(OBJD)\libaria2\FeedbackURISelector.obj \
        $(OBJD)\libaria2\File.obj \
        $(OBJD)\libaria2\FileAllocationCommand.obj \
        $(OBJD)\libaria2\FileAllocationDispatcherCommand.obj \
        $(OBJD)\libaria2\FileAllocationEntry.obj \
        $(OBJD)\libaria2\FileEntry.obj \
        $(OBJD)\libaria2\FillRequestGroupCommand.obj \
        $(OBJD)\libaria2\fmt.obj \
        $(OBJD)\libaria2\FtpConnection.obj \
        $(OBJD)\libaria2\FtpDownloadCommand.obj \
        $(OBJD)\libaria2\FtpFinishDownloadCommand.obj \
        $(OBJD)\libaria2\FtpInitiateConnectionCommand.obj \
        $(OBJD)\libaria2\FtpNegotiationCommand.obj \
        $(OBJD)\libaria2\FtpTunnelRequestCommand.obj \
        $(OBJD)\libaria2\FtpTunnelResponseCommand.obj \
        $(OBJD)\libaria2\GeomStreamPieceSelector.obj \
        $(OBJD)\libaria2\GroupId.obj \
        $(OBJD)\libaria2\GrowSegment.obj \
        $(OBJD)\libaria2\GZipDecodingStreamFilter.obj \
        $(OBJD)\libaria2\GZipEncoder.obj \
        $(OBJD)\libaria2\GZipFile.obj \
        $(OBJD)\libaria2\HandshakeExtensionMessage.obj \
        $(OBJD)\libaria2\HaveEraseCommand.obj \
        $(OBJD)\libaria2\help_tags.obj \
        $(OBJD)\libaria2\HttpConnection.obj \
        $(OBJD)\libaria2\HttpDownloadCommand.obj \
        $(OBJD)\libaria2\HttpHeader.obj \
        $(OBJD)\libaria2\HttpHeaderProcessor.obj \
        $(OBJD)\libaria2\HttpInitiateConnectionCommand.obj \
        $(OBJD)\libaria2\HttpListenCommand.obj \
        $(OBJD)\libaria2\HttpProxyRequestCommand.obj \
        $(OBJD)\libaria2\HttpProxyResponseCommand.obj \
        $(OBJD)\libaria2\HttpRequest.obj \
        $(OBJD)\libaria2\HttpRequestCommand.obj \
        $(OBJD)\libaria2\HttpResponse.obj \
        $(OBJD)\libaria2\HttpResponseCommand.obj \
        $(OBJD)\libaria2\HttpServer.obj \
        $(OBJD)\libaria2\HttpServerBodyCommand.obj \
        $(OBJD)\libaria2\HttpServerCommand.obj \
        $(OBJD)\libaria2\HttpServerResponseCommand.obj \
        $(OBJD)\libaria2\HttpSkipResponseCommand.obj \
        $(OBJD)\libaria2\IndexBtMessage.obj \
        $(OBJD)\libaria2\IndexBtMessageValidator.obj \
        $(OBJD)\libaria2\InitiateConnectionCommand.obj \
        $(OBJD)\libaria2\InitiateConnectionCommandFactory.obj \
        $(OBJD)\libaria2\InitiatorMSEHandshakeCommand.obj \
        $(OBJD)\libaria2\InorderStreamPieceSelector.obj \
        $(OBJD)\libaria2\InorderURISelector.obj \
        $(OBJD)\libaria2\InternalARC4Encryptor.obj \
        $(OBJD)\libaria2\InternalMessageDigestImpl.obj \
        $(OBJD)\libaria2\IOFile.obj \
        $(OBJD)\libaria2\IteratableChecksumValidator.obj \
        $(OBJD)\libaria2\IteratableChunkChecksumValidator.obj \
        $(OBJD)\libaria2\json.obj \
        $(OBJD)\libaria2\JsonParser.obj \
        $(OBJD)\libaria2\LogFactory.obj \
        $(OBJD)\libaria2\Logger.obj \
        $(OBJD)\libaria2\LongestSequencePieceSelector.obj \
        $(OBJD)\libaria2\LpdDispatchMessageCommand.obj \
        $(OBJD)\libaria2\LpdMessage.obj \
        $(OBJD)\libaria2\LpdMessageDispatcher.obj \
        $(OBJD)\libaria2\LpdMessageReceiver.obj \
        $(OBJD)\libaria2\LpdReceiveMessageCommand.obj \
        $(OBJD)\libaria2\magnet.obj \
        $(OBJD)\libaria2\MessageDigest.obj \
        $(OBJD)\libaria2\message_digest_helper.obj \
        $(OBJD)\libaria2\MetadataInfo.obj \
        $(OBJD)\libaria2\Metalink2RequestGroup.obj \
        $(OBJD)\libaria2\MetalinkEntry.obj \
        $(OBJD)\libaria2\Metalinker.obj \
        $(OBJD)\libaria2\MetalinkHttpEntry.obj \
        $(OBJD)\libaria2\MetalinkMetaurl.obj \
        $(OBJD)\libaria2\MetalinkParserController.obj \
        $(OBJD)\libaria2\MetalinkParserState.obj \
        $(OBJD)\libaria2\MetalinkParserStateImpl.obj \
        $(OBJD)\libaria2\MetalinkParserStateMachine.obj \
        $(OBJD)\libaria2\MetalinkParserStateV3Impl.obj \
        $(OBJD)\libaria2\MetalinkParserStateV4Impl.obj \
        $(OBJD)\libaria2\MetalinkPostDownloadHandler.obj \
        $(OBJD)\libaria2\MetalinkResource.obj \
        $(OBJD)\libaria2\metalink_helper.obj \
        $(OBJD)\libaria2\MSEHandshake.obj \
        $(OBJD)\libaria2\MultiDiskAdaptor.obj \
        $(OBJD)\libaria2\MultiFileAllocationIterator.obj \
        $(OBJD)\libaria2\MultiUrlRequestInfo.obj \
        $(OBJD)\libaria2\NameResolveCommand.obj \
        $(OBJD)\libaria2\NameResolver.obj \
        $(OBJD)\libaria2\Netrc.obj \
        $(OBJD)\libaria2\NetrcAuthResolver.obj \
        $(OBJD)\libaria2\NetStat.obj \
        $(OBJD)\libaria2\Notifier.obj \
        $(OBJD)\libaria2\NsCookieParser.obj \
        $(OBJD)\libaria2\NullSinkStreamFilter.obj \
        $(OBJD)\libaria2\OpenedFileCounter.obj \
        $(OBJD)\libaria2\Option.obj \
        $(OBJD)\libaria2\OptionHandler.obj \
        $(OBJD)\libaria2\OptionHandlerException.obj \
        $(OBJD)\libaria2\OptionHandlerFactory.obj \
        $(OBJD)\libaria2\OptionHandlerImpl.obj \
        $(OBJD)\libaria2\OptionParser.obj \
        $(OBJD)\libaria2\option_processing.obj \
        $(OBJD)\libaria2\paramed_string.obj \
        $(OBJD)\libaria2\Peer.obj \
        $(OBJD)\libaria2\PeerAbstractCommand.obj \
        $(OBJD)\libaria2\PeerAddrEntry.obj \
        $(OBJD)\libaria2\PeerChokeCommand.obj \
        $(OBJD)\libaria2\PeerConnection.obj \
        $(OBJD)\libaria2\PeerInitiateConnectionCommand.obj \
        $(OBJD)\libaria2\PeerInteractionCommand.obj \
        $(OBJD)\libaria2\PeerListenCommand.obj \
        $(OBJD)\libaria2\PeerReceiveHandshakeCommand.obj \
        $(OBJD)\libaria2\PeerSessionResource.obj \
        $(OBJD)\libaria2\PeerStat.obj \
        $(OBJD)\libaria2\Piece.obj \
        $(OBJD)\libaria2\PiecedSegment.obj \
        $(OBJD)\libaria2\PieceHashCheckIntegrityEntry.obj \
        $(OBJD)\libaria2\PieceStatMan.obj \
        $(OBJD)\libaria2\Platform.obj \
        $(OBJD)\libaria2\prefs.obj \
        $(OBJD)\libaria2\PriorityPieceSelector.obj \
        $(OBJD)\libaria2\ProtocolDetector.obj \
        $(OBJD)\libaria2\RandomStreamPieceSelector.obj \
        $(OBJD)\libaria2\Range.obj \
        $(OBJD)\libaria2\RangeBtMessage.obj \
        $(OBJD)\libaria2\RangeBtMessageValidator.obj \
        $(OBJD)\libaria2\RarestPieceSelector.obj \
        $(OBJD)\libaria2\RealtimeCommand.obj \
        $(OBJD)\libaria2\ReceiverMSEHandshakeCommand.obj \
        $(OBJD)\libaria2\RecoverableException.obj \
        $(OBJD)\libaria2\Request.obj \
        $(OBJD)\libaria2\RequestGroup.obj \
        $(OBJD)\libaria2\RequestGroupEntry.obj \
        $(OBJD)\libaria2\RequestGroupMan.obj \
        $(OBJD)\libaria2\RequestSlot.obj \
        $(OBJD)\libaria2\RpcMethod.obj \
        $(OBJD)\libaria2\RpcMethodFactory.obj \
        $(OBJD)\libaria2\RpcMethodImpl.obj \
        $(OBJD)\libaria2\RpcRequest.obj \
        $(OBJD)\libaria2\RpcResponse.obj \
        $(OBJD)\libaria2\rpc_helper.obj \
        $(OBJD)\libaria2\SaveSessionCommand.obj \
        $(OBJD)\libaria2\SeedCheckCommand.obj \
        $(OBJD)\libaria2\SegmentMan.obj \
        $(OBJD)\libaria2\SelectEventPoll.obj \
        $(OBJD)\libaria2\ServerStat.obj \
        $(OBJD)\libaria2\ServerStatMan.obj \
        $(OBJD)\libaria2\SessionSerializer.obj \
        $(OBJD)\libaria2\SftpDownloadCommand.obj \
        $(OBJD)\libaria2\SftpFinishDownloadCommand.obj \
        $(OBJD)\libaria2\SftpNegotiationCommand.obj \
        $(OBJD)\libaria2\SHA1IOFile.obj \
        $(OBJD)\libaria2\ShareRatioSeedCriteria.obj \
        $(OBJD)\libaria2\Signature.obj \
        $(OBJD)\libaria2\SimpleBtMessage.obj \
        $(OBJD)\libaria2\SimpleRandomizer.obj \
        $(OBJD)\libaria2\SingleFileAllocationIterator.obj \
        $(OBJD)\libaria2\SinkStreamFilter.obj \
        $(OBJD)\libaria2\SocketBuffer.obj \
        $(OBJD)\libaria2\SocketCore.obj \
        $(OBJD)\libaria2\SocketRecvBuffer.obj \
        $(OBJD)\libaria2\SpeedCalc.obj \
        $(OBJD)\libaria2\Sqlite3CookieParser.obj \
        $(OBJD)\libaria2\Sqlite3CookieParserImpl.obj \
        $(OBJD)\libaria2\SSHSession.obj \
        $(OBJD)\libaria2\StreamCheckIntegrityEntry.obj \
        $(OBJD)\libaria2\StreamFileAllocationEntry.obj \
        $(OBJD)\libaria2\StreamFilter.obj \
        $(OBJD)\libaria2\strptime.obj \
        $(OBJD)\libaria2\TimeA2.obj \
        $(OBJD)\libaria2\TimeBasedCommand.obj \
        $(OBJD)\libaria2\TimedHaltCommand.obj \
        $(OBJD)\libaria2\TimerA2.obj \
        $(OBJD)\libaria2\TimeSeedCriteria.obj \
        $(OBJD)\libaria2\TorrentAttribute.obj \
        $(OBJD)\libaria2\TrackerWatcherCommand.obj \
        $(OBJD)\libaria2\TransferStat.obj \
        $(OBJD)\libaria2\TruncFileAllocationIterator.obj \
        $(OBJD)\libaria2\UDPTrackerClient.obj \
        $(OBJD)\libaria2\UDPTrackerRequest.obj \
        $(OBJD)\libaria2\UnionSeedCriteria.obj \
        $(OBJD)\libaria2\UnknownLengthPieceStorage.obj \
        $(OBJD)\libaria2\UnknownOptionException.obj \
        $(OBJD)\libaria2\uri.obj \
        $(OBJD)\libaria2\UriListParser.obj \
        $(OBJD)\libaria2\URIResult.obj \
        $(OBJD)\libaria2\uri_split.obj \
        $(OBJD)\libaria2\util.obj \
        $(OBJD)\libaria2\util_security.obj \
        $(OBJD)\libaria2\UTMetadataDataExtensionMessage.obj \
        $(OBJD)\libaria2\UTMetadataExtensionMessage.obj \
        $(OBJD)\libaria2\UTMetadataPostDownloadHandler.obj \
        $(OBJD)\libaria2\UTMetadataRejectExtensionMessage.obj \
        $(OBJD)\libaria2\UTMetadataRequestExtensionMessage.obj \
        $(OBJD)\libaria2\UTMetadataRequestFactory.obj \
        $(OBJD)\libaria2\UTMetadataRequestTracker.obj \
        $(OBJD)\libaria2\UTPexExtensionMessage.obj \
        $(OBJD)\libaria2\ValueBase.obj \
        $(OBJD)\libaria2\ValueBaseStructParserStateImpl.obj \
        $(OBJD)\libaria2\ValueBaseStructParserStateMachine.obj \
        $(OBJD)\libaria2\version_usage.obj \
        $(OBJD)\libaria2\wallclock.obj \
        $(OBJD)\libaria2\WatchProcessCommand.obj \
        $(OBJD)\libaria2\WebSocketInteractionCommand.obj \
        $(OBJD)\libaria2\WebSocketResponseCommand.obj \
        $(OBJD)\libaria2\WebSocketSession.obj \
        $(OBJD)\libaria2\WebSocketSessionMan.obj \
        $(OBJD)\libaria2\WinConsoleFile.obj \
        $(OBJD)\libaria2\LibsslTLSContext.obj \
        $(OBJD)\libaria2\LibsslTLSSession.obj \
        $(OBJD)\libaria2\WrDiskCache.obj \
        $(OBJD)\libaria2\WrDiskCacheEntry.obj \
        $(OBJD)\libaria2\XmlAttr.obj \
        $(OBJD)\libaria2\XmlParser.obj \
        $(OBJD)\libaria2\XmlRpcDiskWriter.obj \
        $(OBJD)\libaria2\XmlRpcRequestParserController.obj \
        $(OBJD)\libaria2\XmlRpcRequestParserStateImpl.obj \
        $(OBJD)\libaria2\XmlRpcRequestParserStateMachine.obj \
        $(OBJD)\libaria2\ZeroBtMessage.obj \
        $(OBJD)\libaria2\ngweb.obj \
        $(OBJD)\libaria2\getopt.obj \
        $(OBJD)\libaria2\gettimeofday.obj

CFLAGS=$(CFLAGS) -W3 -Gy -GR- -Oy- -wd4244 -wd4267 -wd4065 -D NOMINMAX -D XML_STATIC \
       -wd4101 -wd4996 -D _WINDOWS -D _LIB -D HAVE_CONFIG_H  -D HAVE_LIBMICROHTTPD -D CARES_STATICLIB -I.

!IF "x$(OPENSSL_ROOT)" == "x"
CFLAGS  = $(CFLAGS) -DHAVE_LIBGMP -DHAVE_WINTLS
OBJECTS = $(OBJECTS) $(OBJD)\libaria2\a2gmp.obj $(OBJD)\libaria2\LibgmpDHKeyExchange.obj
!ELSE
CFLAGS  = $(CFLAGS) -DHAVE_OPENSSL -I"$(OPENSSL_ROOT)/include"
OBJECTS = $(OBJECTS) $(OBJD)\libaria2\LibsslDHKeyExchange.obj
!ENDIF

CXXFLAGS=$(CFLAGS) -EHsc -Zc:__cplusplus

{$(TOP)}.c{$(OBJD)\libaria2}.obj:
	$(CC) -c $(CFLAGS) /Fo$(OBJD)\libaria2\ $<
	
{$(TOP)}.cc{$(OBJD)\libaria2}.obj:
	$(CC) -c $(CXXFLAGS) /Fo$(OBJD)\libaria2\ $<
	
all: dirs $(STATICLIB) \
     $(INCD)\aria2\aria2.h \
     $(INCD)\aria2\config.h \
     $(INCD)\aria2\common.h

dirs:
    @if not exist "$(BIND)" mkdir "$(BIND)" && echo.   Created $(BIND)
    @if not exist "$(OBJD)" mkdir "$(OBJD)" && echo.   Created $(OBJD)
    @if not exist "$(INCD)" mkdir "$(INCD)" && echo.   Created $(INCD)
    @if not exist "$(INCD)\aria2" mkdir "$(INCD)\aria2" && echo.   Created $(INCD)\aria2
    @if not exist "$(OBJD)\libaria2" mkdir "$(OBJD)\libaria2" && echo.   Created $(OBJD)\libaria2
    @if not exist "$(INCD)\aria2\aria2.h" @copy aria2.h "$(INCD)\aria2\aria2.h" /y 2>nul
    
$(STATICLIB): $(OBJECTS) $(HHEADERS)
	$(AR) -out:$@ $(ARFLAGS) $(OBJECTS)
	
$(INCD)\aria2\aria2.h : aria2.h
    @copy aria2.h $@ /y 2>nul

$(INCD)\aria2\config.h: config.h
    @copy config.h $@ /y 2>nul
    
$(INCD)\aria2\common.h: common.h
    @copy common.h $@ /y 2>nul
        
# cleanup
clean:
	-del /q $(STATICLIB) 2>nul
	-del /q $(BIND)\libaria2.pdb 2>nul
	-rd  /s /q $(INCD)\aria2 2>nul
	-rd  /s /q $(OBJD)\libaria2 2>nul
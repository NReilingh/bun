enum SyntheticModuleType : uint32_t {
    JavaScript = 0,
    PackageJSONTypeModule = 1,
    Wasm = 2,
    ObjectModule = 3,
    File = 4,
    ESM = 5,
    JSONForObjectLoader = 6,

    // Built in modules are loaded through InternalModuleRegistry by numerical ID.
    // In this enum are represented as `(1 << 9) & id`
    InternalModuleRegistryFlag = 1 << 9,
    BunFFI = 512,
    BunSqlite = 513,
    InternalDebugger = 514,
    InternalFSCpSync = 515,
    InternalFSCp = 516,
    InternalPrimordials = 517,
    InternalShared = 518,
    InternalUtilInspect = 519,
    NodeAssert = 520,
    NodeAssertStrict = 521,
    NodeAsyncHooks = 522,
    NodeChildProcess = 523,
    NodeCluster = 524,
    NodeConsole = 525,
    NodeCrypto = 526,
    NodeDgram = 527,
    NodeDiagnosticsChannel = 528,
    NodeDNS = 529,
    NodeDNSPromises = 530,
    NodeDomain = 531,
    NodeEvents = 532,
    NodeFS = 533,
    NodeFSPromises = 534,
    NodeHttp = 535,
    NodeHttp2 = 536,
    NodeHttps = 537,
    NodeInspector = 538,
    NodeNet = 539,
    NodeOS = 540,
    NodePathPosix = 541,
    NodePath = 542,
    NodePathWin32 = 543,
    NodePerfHooks = 544,
    NodePunycode = 545,
    NodeQuerystring = 546,
    NodeReadline = 547,
    NodeReadlinePromises = 548,
    NodeRepl = 549,
    NodeStreamConsumers = 550,
    NodeStream = 551,
    NodeStreamPromises = 552,
    NodeStreamWeb = 553,
    NodeTimers = 554,
    NodeTimersPromises = 555,
    NodeTLS = 556,
    NodeTraceEvents = 557,
    NodeTty = 558,
    NodeUrl = 559,
    NodeUtil = 560,
    NodeV8 = 561,
    NodeVM = 562,
    NodeWasi = 563,
    NodeWorkerThreads = 564,
    NodeZlib = 565,
    ThirdpartyDepd = 566,
    ThirdpartyDetectLibc = 567,
    ThirdpartyDetectLibcLinux = 568,
    ThirdpartyIsomorphicFetch = 569,
    ThirdpartyNodeFetch = 570,
    ThirdpartyUndici = 571,
    ThirdpartyVercelFetch = 572,
    ThirdpartyWS = 573,
    
    // Native modules run through the same system, but with different underlying initializers.
    // They also have bit 10 set to differentiate them from JS builtins.
    NativeModuleFlag = (1 << 10) | (1 << 9),
    BunObject = 1024,
    BunJSC = 1025,
    NodeBuffer = 1026,
    NodeConstants = 1027,
    NodeModule = 1028,
    NodeProcess = 1029,
    NodeStringDecoder = 1030,
    NodeUtilTypes = 1031,
    UTF8Validate = 1032,
};

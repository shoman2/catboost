IF (HOST_OS_DARWIN AND HOST_ARCH_X86_64)
    DECLARE_EXTERNAL_RESOURCE(TEST_TOOL_HOST sbr:1871025228)
    DECLARE_EXTERNAL_RESOURCE(TEST_TOOL3_HOST sbr:1870956950)
ELSEIF (HOST_OS_LINUX AND HOST_ARCH_PPC64LE)
    DECLARE_EXTERNAL_RESOURCE(TEST_TOOL_HOST sbr:1871025025)
    DECLARE_EXTERNAL_RESOURCE(TEST_TOOL3_HOST sbr:1870956566)
ELSEIF (HOST_OS_LINUX AND HOST_ARCH_X86_64)
    DECLARE_EXTERNAL_RESOURCE(TEST_TOOL_HOST sbr:1871025548)
    DECLARE_EXTERNAL_RESOURCE(TEST_TOOL3_HOST sbr:1870957144)
ELSEIF (HOST_OS_WINDOWS AND HOST_ARCH_X86_64)
    DECLARE_EXTERNAL_RESOURCE(TEST_TOOL_HOST sbr:1871024774)
    DECLARE_EXTERNAL_RESOURCE(TEST_TOOL3_HOST sbr:1870956259)
ENDIF()

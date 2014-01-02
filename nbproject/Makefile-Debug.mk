#
# Generated Makefile - do not edit!
#
# Edit the Makefile in the project folder instead (../Makefile). Each target
# has a -pre and a -post target defined where you can add customized code.
#
# This makefile implements configuration specific macros and targets.


# Environment
MKDIR=mkdir
CP=cp
GREP=grep
NM=nm
CCADMIN=CCadmin
RANLIB=ranlib
CC=gcc
CCC=g++
CXX=g++
FC=gfortran
AS=as

# Macros
CND_PLATFORM=MinGW-Windows
CND_DLIB_EXT=dll
CND_CONF=Debug
CND_DISTDIR=dist
CND_BUILDDIR=build

# Include project Makefile
include Makefile

# Object Directory
OBJECTDIR=${CND_BUILDDIR}/${CND_CONF}/${CND_PLATFORM}

# Object Files
OBJECTFILES= \
	${OBJECTDIR}/compile.o \
	${OBJECTDIR}/src/MathService.o \
	${OBJECTDIR}/src/VectorBucketSort.o

# Test Directory
TESTDIR=${CND_BUILDDIR}/${CND_CONF}/${CND_PLATFORM}/tests

# Test Files
TESTFILES= \
	${TESTDIR}/TestFiles/f1

# C Compiler Flags
CFLAGS=

# CC Compiler Flags
CCFLAGS=
CXXFLAGS=

# Fortran Compiler Flags
FFLAGS=

# Assembler Flags
ASFLAGS=

# Link Libraries and Options
LDLIBSOPTIONS=

# Build Targets
.build-conf: ${BUILD_SUBPROJECTS}
	"${MAKE}"  -f nbproject/Makefile-${CND_CONF}.mk ${CND_DISTDIR}/${CND_CONF}/${CND_PLATFORM}/vectorbucketsort_git.exe

${CND_DISTDIR}/${CND_CONF}/${CND_PLATFORM}/vectorbucketsort_git.exe: ${OBJECTFILES}
	${MKDIR} -p ${CND_DISTDIR}/${CND_CONF}/${CND_PLATFORM}
	${LINK.cc} -o ${CND_DISTDIR}/${CND_CONF}/${CND_PLATFORM}/vectorbucketsort_git ${OBJECTFILES} ${LDLIBSOPTIONS}

${OBJECTDIR}/compile.o: compile.cpp 
	${MKDIR} -p ${OBJECTDIR}
	${RM} "$@.d"
	$(COMPILE.cc) -g -I../../gtest-1.7.0 -I../../gtest-1.7.0/include -I../VectorService -MMD -MP -MF "$@.d" -o ${OBJECTDIR}/compile.o compile.cpp

${OBJECTDIR}/src/MathService.o: src/MathService.cpp 
	${MKDIR} -p ${OBJECTDIR}/src
	${RM} "$@.d"
	$(COMPILE.cc) -g -I../../gtest-1.7.0 -I../../gtest-1.7.0/include -I../VectorService -MMD -MP -MF "$@.d" -o ${OBJECTDIR}/src/MathService.o src/MathService.cpp

${OBJECTDIR}/src/VectorBucketSort.o: src/VectorBucketSort.cpp 
	${MKDIR} -p ${OBJECTDIR}/src
	${RM} "$@.d"
	$(COMPILE.cc) -g -I../../gtest-1.7.0 -I../../gtest-1.7.0/include -I../VectorService -MMD -MP -MF "$@.d" -o ${OBJECTDIR}/src/VectorBucketSort.o src/VectorBucketSort.cpp

# Subprojects
.build-subprojects:

# Build Test Targets
.build-tests-conf: .build-conf ${TESTFILES}
${TESTDIR}/TestFiles/f1: ${TESTDIR}/tests/MathServiceTest.o ${TESTDIR}/tests/VectorBucketSortTest.o ${OBJECTFILES:%.o=%_nomain.o}
	${MKDIR} -p ${TESTDIR}/TestFiles
	${LINK.cc}   -o ${TESTDIR}/TestFiles/f1 $^ ${LDLIBSOPTIONS} ../googletest/dist/Debug/MinGW-Windows/libgoogletest.a 


${TESTDIR}/tests/MathServiceTest.o: tests/MathServiceTest.cpp 
	${MKDIR} -p ${TESTDIR}/tests
	${RM} "$@.d"
	$(COMPILE.cc) -g -I../../gtest-1.7.0 -I../../gtest-1.7.0/include -I../VectorService -I. -I../../gtest-1.7.0 -I../../gtest-1.7.0/include -MMD -MP -MF "$@.d" -o ${TESTDIR}/tests/MathServiceTest.o tests/MathServiceTest.cpp


${TESTDIR}/tests/VectorBucketSortTest.o: tests/VectorBucketSortTest.cpp 
	${MKDIR} -p ${TESTDIR}/tests
	${RM} "$@.d"
	$(COMPILE.cc) -g -I../../gtest-1.7.0 -I../../gtest-1.7.0/include -I../VectorService -I. -I../../gtest-1.7.0 -I../../gtest-1.7.0/include -MMD -MP -MF "$@.d" -o ${TESTDIR}/tests/VectorBucketSortTest.o tests/VectorBucketSortTest.cpp


${OBJECTDIR}/compile_nomain.o: ${OBJECTDIR}/compile.o compile.cpp 
	${MKDIR} -p ${OBJECTDIR}
	@NMOUTPUT=`${NM} ${OBJECTDIR}/compile.o`; \
	if (echo "$$NMOUTPUT" | ${GREP} '|main$$') || \
	   (echo "$$NMOUTPUT" | ${GREP} 'T main$$') || \
	   (echo "$$NMOUTPUT" | ${GREP} 'T _main$$'); \
	then  \
	    ${RM} "$@.d";\
	    $(COMPILE.cc) -g -I../../gtest-1.7.0 -I../../gtest-1.7.0/include -I../VectorService -Dmain=__nomain -MMD -MP -MF "$@.d" -o ${OBJECTDIR}/compile_nomain.o compile.cpp;\
	else  \
	    ${CP} ${OBJECTDIR}/compile.o ${OBJECTDIR}/compile_nomain.o;\
	fi

${OBJECTDIR}/src/MathService_nomain.o: ${OBJECTDIR}/src/MathService.o src/MathService.cpp 
	${MKDIR} -p ${OBJECTDIR}/src
	@NMOUTPUT=`${NM} ${OBJECTDIR}/src/MathService.o`; \
	if (echo "$$NMOUTPUT" | ${GREP} '|main$$') || \
	   (echo "$$NMOUTPUT" | ${GREP} 'T main$$') || \
	   (echo "$$NMOUTPUT" | ${GREP} 'T _main$$'); \
	then  \
	    ${RM} "$@.d";\
	    $(COMPILE.cc) -g -I../../gtest-1.7.0 -I../../gtest-1.7.0/include -I../VectorService -Dmain=__nomain -MMD -MP -MF "$@.d" -o ${OBJECTDIR}/src/MathService_nomain.o src/MathService.cpp;\
	else  \
	    ${CP} ${OBJECTDIR}/src/MathService.o ${OBJECTDIR}/src/MathService_nomain.o;\
	fi

${OBJECTDIR}/src/VectorBucketSort_nomain.o: ${OBJECTDIR}/src/VectorBucketSort.o src/VectorBucketSort.cpp 
	${MKDIR} -p ${OBJECTDIR}/src
	@NMOUTPUT=`${NM} ${OBJECTDIR}/src/VectorBucketSort.o`; \
	if (echo "$$NMOUTPUT" | ${GREP} '|main$$') || \
	   (echo "$$NMOUTPUT" | ${GREP} 'T main$$') || \
	   (echo "$$NMOUTPUT" | ${GREP} 'T _main$$'); \
	then  \
	    ${RM} "$@.d";\
	    $(COMPILE.cc) -g -I../../gtest-1.7.0 -I../../gtest-1.7.0/include -I../VectorService -Dmain=__nomain -MMD -MP -MF "$@.d" -o ${OBJECTDIR}/src/VectorBucketSort_nomain.o src/VectorBucketSort.cpp;\
	else  \
	    ${CP} ${OBJECTDIR}/src/VectorBucketSort.o ${OBJECTDIR}/src/VectorBucketSort_nomain.o;\
	fi

# Run Test Targets
.test-conf:
	@if [ "${TEST}" = "" ]; \
	then  \
	    ${TESTDIR}/TestFiles/f1 || true; \
	else  \
	    ./${TEST} || true; \
	fi

# Clean Targets
.clean-conf: ${CLEAN_SUBPROJECTS}
	${RM} -r ${CND_BUILDDIR}/${CND_CONF}
	${RM} ${CND_DISTDIR}/${CND_CONF}/${CND_PLATFORM}/vectorbucketsort_git.exe

# Subprojects
.clean-subprojects:

# Enable dependency checking
.dep.inc: .depcheck-impl

include .dep.inc

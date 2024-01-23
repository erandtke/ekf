#~/bin/bash
i
#
# third party / dependencies
#

ROOT_DIR=`pwd`
BUILD_DIR=${ROOT_DIR}/build
THIRD_PARTY=${ROOT_DIR}/third_party
MANIF_DIR=${THIRD_PARTY}/manif

CMAKE_PREFIX_PATH=${ROOT_DIR}/install
CMAKE_INSTALL_PATH=${ROOT_DIR}/install

mkdir $BUILD_DIR
cd $BUILD_DIR

CMAKE_ARGS="-DCMAKE_PREFIX_PATH=${CMAKE_PREFIX_PATH} -DCMAKE_INSTALL_PATH=${CMAKE_INSTALL_PATH}"

cmake ${CMAKE_ARGS} ${MANIF_DIR}

cmake -DCMAKE_PREFIX_PATH=${ROOT_DIR}/install
make install

#
# project
#

cd $BUILD_DIR
cmake ${CMAKE_ARGS} ..
make install

#~/bin/bash
i
#
# third party / dependencies
#

ROOT_DIR=`pwd`
BUILD_DIR=${ROOT_DIR}/build
THIRD_PARTY=${ROOT_DIR}/third_party

MANIF_DIR=${THIRD_PARTY}/manif
EIGEN_DIR=${THIRD_PARTY}/eigen

CMAKE_PREFIX_PATH=${ROOT_DIR}/install
CMAKE_INSTALL_PATH=${ROOT_DIR}/install

CMAKE_ARGS="-DCMAKE_PREFIX_PATH=${CMAKE_PREFIX_PATH} -DCMAKE_INSTALL_PREFIX=${CMAKE_INSTALL_PATH}"

# eigen
echo "building eigen"
mkdir -p $EIGEN_DIR/build
cd $EIGEN_DIR/build
echo "cmake command: "
echo "cmake ${CMAKE_ARGS} ${EIGEN_DIR}"
cmake ${CMAKE_ARGS} ${EIGEN_DIR}
make install

# manif
mkdir -p $MANIF_DIR/build
cd $MANIF_DIR/build
cmake ${CMAKE_ARGS} ${MANIF_DIR}
make install


#
# project
#

exit

cd $BUILD_DIR
cmake ${CMAKE_ARGS} ..
make install

#
# sensors
#

add_library(ekf_sensors INTERFACE include)
ALIAS(ekf::sensors ekf_sensors)

add_library(ekf_ekf INTERFACE include)
ALIAS(ekf::ekf ekf_ekf)




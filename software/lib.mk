# $@ 目标文件
# $^ 全部依赖文件
# $< 第一个依赖文件
INC+= -I $(ROOTDIR)/software/application/ -I $(ROOTDIR)/software/cloud/ -I $(ROOTDIR)/software/lib/ -I $(ROOTDIR)/software/lan/ -I $(ROOTDIR)/iof/ \
      -I $(ROOTDIR)/software/

LIBTARGET_FILES = $(SRC)/application/Wifi_mode.c \
	$(SRC)/application/xpgmain.c \
	$(SRC)/cloud/http.c \
	$(SRC)/cloud/mqttlib.c \
	$(SRC)/cloud/MqttSTM.c \
	$(SRC)/cloud/mqttxpg.c \
	$(SRC)/lan/lan.c \
	$(SRC)/lan/mcu_v4.c \
	$(SRC)/lan/mcu_common.c \
	$(SRC)/lan/Socket.c \
	$(SRC)/lib/base64.c \
	$(SRC)/lib/user_misc.c \
	$(SRC)/lib/utilcoding.c \
	$(SRC)/lib/adapter_linux.c \
	$(SRC)/gagent_login_cloud.c \
	$(SRC)/lib/md5.c

l
vim TestSerial/
l
diff RadioTest/NoneC.nc TestSerial/NoneC.nc 
rm _TestGW_01.tgz -rf
l
tar zcvf _TestGW_01.tgz *
l
cp _TestGW_01.tgz $DBACK
l
explorer .
l
cd RadioTest/
l
vim Makefile 
cd ../
l
cd TestGW/
l
vim Makefile 
cd ../
l
cd TestSerial/
l
vim Makefile 
cd ../
l
rm _TestGW_01.tgz -rf
tar zcvf _TestGW_01.tgz *
l
cp _TestGW_01.tgz $DBACK
l
ls -al
ls -r
ls -R
l
cd TestSerial/java/
l
make clean
l
cd ../../
l
rm _TestGW_01.tgz -rf
tar zcvf _TestGW_01.tgz *
cp _TestGW_01.tgz $DBACK
l
cd TestGW/
l
vim Makefile 
l
make telosb
l
cd test/radiotest/
l
cd radiotest/apps/RadioTest/
l
vim SenderTestC.nc 
l
cd ../
l
mv RadioTest/ ../../
l
mv RadioTest/ ../../
l
cd ../../../
l
cd radiotest/
l
cd TestSerial/
l
vim TestSerialC.nc 
l
view Makefile 
cd java/
l
vim Makefile 
cd ../
l
cd ../
l
mv TestSerial/ TestSerial_
l
cp TestSerial_/ TestSerial
l
cp TestSerial_/ TestSerial -rf
cd TestSerial
l
mv TestSerialC.nc TestSerialP.nc
l
mv TestSerialAppC.nc TestSerialC.nv
l
mv TestSerialC.nv TestSerialC.nc
l
vim TestSerialC.nc 
l
cp ../RadioTest/None* ./
l
vim NoneAppC.nc 
make telosb
vim Makefile 
vim ../RadioTest/Makefile 
l
rm Makefile -rf
cp ../RadioTest/Makefile ./
l
make telosb
vim .
make telosb
cd java/
l
make
motelist
l
motelist
vim TestSerial.java 
java TestSerial -comm serial@COM18:115200
l
cd ../
l
cd ../
l
mv radidtest_/ radiotest_/
l
cd $MYJH
java net/tinyos//sf/SerialForwarder -comm serial@COM18:115200
java net/tinyos//sf/SerialForwarder -comm serial@COM1:115200
java net/tinyos/sf/SerialForwarder -comm serial@COM18:115200
l
cd test/radiotest/radiotest/apps/
l
cd RadioTest/
l
cd ../
l
cd ../../
l
cd TestSerial/
l
vim TestSerialAppC.nc 
cd ../../
l
cd radiotest/
l
cd ../../
cd TestTemplate/
l
cd ../test/radiotest/
l
cd TestSerial/
l
cd java/
l
vim TestSerial.java 
cd $TOSDIR
l
find ./ -name SerialC.nc
find ./ -name SerialC.nc -r
find ./ -name SerialC.nc 
find ./ -name AMSender.nc 
find ./ -name AMSenderC.nc 
find ./ -name SerialC.nc 
cd /home/Suchang/work/workspace/my_tinyos/support/sdk/java/
l
java net/tinyos/radiotest/RadioTest
java net/tinyos/radiotest/RadioTest 1 0 21 100 10
l
cd test/
l
ifconfig
ipconfig
l
cd TestCC1200/
l
cd TestTemplate/
l
cd back/
l
cp /cygdrive/c/Users/Suchang/Downloads/cc1200_16.tgz ./
l
tar zxvf cc1200_16.tgz 
l
mv cc1200 cc1200_16
l
cp *.tgz $DBACK
l
cd $DBACK
explorer .
cd $WS
l
cd test/TestCC1200/
l
cd TestTemplate/
l
rm cc1200/ -rf
cp back/cc1200_16.tgz ./
l
rm cc1200_16.tgz -rf
cp back/cc1200_16 ./cc1200 -rf
l
cd cc1200/
l
cd chips/cc1200/receive/
l
vim CC1200ReceiveP.nc 
l
cd ../../
l
cd ../
l
cd ../../
l
cd ../
l
cd radiotest/
l
cd TestSerial/
l
vim TestSerialC.nc 
l
vim README.txt 
l
vim TestSerialC.nc 
vim TestSerialP.nc 
l
cd ../
l
mkdir back
cd back/
l
cp ../_TestGW_01.tgz ./
tar zxvf _TestGW_01.tgz 
l
cd ../
l
diff TestSerial/TestSerialC.nc back/TestSerial/TestSerialC.nc 
diff TestSerial/TestSerialP.nc back/TestSerial/TestSerialP.nc 
l
rm _TestGW_01.tgz -rf
l
tar zcvf _TestGW_02.tgz RadioTest/ TestGW/ TestSerial/
l
cd TestSerial/
l
make clean
l
cd ../
l
cd TestGW/
l
vim Makefile 
l
cd ../
l
rm _TestGW_02.tgz -rf
tar zcvf _TestGW_02.tgz RadioTest/ TestGW/ TestSerial/
l
cd TestGW/
l
make clean
cd ../
l
cd TestSerial/
l
cd ../
l
rm _TestGW_02.tgz -rf
tar zcvf _TestGW_02.tgz RadioTest/ TestGW/ TestSerial/
l
rm _TestGW_02.tgz -rf
l
tar zcvf _TestGW_02.tgz TestSerial
l
cp _TestGW_02.tgz $DBACK
l
explorer .
l
cd /home/Suchang/work/workspace/test/TestCC1200/
l
cd TestTemplate/
l
cd cc1200/
l
cd chips/cc1200/receive/
l
vim CC1200ReceiveP.nc 
cd test/TestCC1200/
l
cd back/
l
cd ../
l
cd TestTemplate/
l
cd cc2420/
l
cd receive/
l
vim CC2420ReceiveP.nc 
view CC2420ReceiveP.nc 
l
cd test/radiotest/
l
rm _TestGW_02.tgz -rf
l
cd TestGW/
l
vim Makefile 
make telosb
motelist
make telosb reinstall.1
make telosb reinstall.2
make telosb reinstall.3
motelist
l
vim .
l
cd ../
l
cd TestSerial/
l
cd java/
l
make
java TestSerial
cd $WS
l
cd ../
l
cd mg/
l
cd ../
l
mv mg/ backup/mg_back_2016_03_17 -rf
mv mg/ backup/mg_back_2016_03_17
cp /cygdrive/c/Users/Suchang/Downloads/mg_0_6_pre3_20160317_101811.tgz ./
l
tar zxvf mg_0_6_pre3_20160317_101811.tgz 
l
mv mg_0_6_pre3_20160317_101811 mg
l
mv mg_0_6_pre3_20160317_101811.tgz $DBACK
l
cd mg/
l
cd apps/
l
cd TestGateway/
l
vim Makefile 
l
cd ../
l
cd TestSerial/
l
vim Makefile 
vim .
l
cd ../
l
cd LocalizationTag/
l
cd ../
l
cd DcoBaseStation/
l
vim Makefile 
l
cd ../
l
cd ../
l
cd ../
l
rm mg/ -rf
cp /cygdrive/c/Users/Suchang/Downloads/mg_0_6_pre3_20160317_135954.tgz ./
l
tar zxvf mg_0_6_pre3_20160317_135954.tgz 
l
mv mg_0_6_pre3_20160317_135954 $DBACK
l
mv /cygdrive/d/sinbinet/devel/mg_0_6_pre3_20160 ./
mv /cygdrive/d/sinbinet/devel/mg_0_6_pre3_20160317_135954/ ./
l
mv mg_0_6_pre3_20160317_135954.tgz $DBACK
l
cd workspace/
l
cd test/
l
cd TestCC1200/
l
cd TestTemplate/
l
cd back/
cp /cygdrive/c/Users/Suchang/Downloads/cc1200_17.tgz ./
l
tar zxvf cc1200_17.tgz 
l
mv cc1200_17
mv cc1200 cc1200_17
l
cp cc1200_17 ../cc1200 -rf
cp cc1200_17.tgz $DBACK
l
cd ../
l
cd cc1200/
l
cd ../
l
cd back/
l
cp cc1200_17 ../cc1200 -rf
l
cd ../
l
cd cc1200/
l
rm cc1200_17/ -rf
l
cd ../
l
cd cc1200/
l
cd chips/
l
cd ../
l
cd ../
l
cd back/
l
diff cc1200_16 cc1200_17 -r
l
cd ../
l
cd cc1200/
l
$EDITOR
git config --global core.editor
cd $PDM_TOSDIR
l
cd ../../
l
git config --global core.editor
git config --global user.name
cd ../
git config --global user.name
git config --global core.editor vim
git config --global core.editor
git config --global user.name succha
git config --global user.email suchanglee@sinbinet.com
git config --global user.email
cd ~
l
vim .gitconfig 
cd %PJH
cd $PJH
cd ../../../../
l
cd .git
l
vim config 
cd ../
l
cd /etc/
l
cd $PDM_TOSDIR
l
cd ../../
l
vim ~
cd /home/Suchang/work/workspace/test/TestPdM/Sentri/ver_1/Sentri/_Sentri_1_11/
l
./jtag_reinstall.sh 19
cd $PDM_TOSDIR
cd ../../
git log
:q!
l
cd $MYJH
java net/tinyos/radiotest/RadioTest
java net/tinyos/radiotest/RadioTest 21 100 100
java net/tinyos/radiotest/RadioTest 1 2 21 100 100
java net/tinyos/radiotest/RadioTest 2 1 21 100 100
java net/tinyos/radiotest/RadioTest 1 2 21 100 100
java net/tinyos/radiotest/RadioTest 2 3 21 100 100
java net/tinyos/radiotest/RadioTest 3 1 21 100 100
java net/tinyos/radiotest/RadioTest 1 3 21 100 100
java net/tinyos/radiotest/RadioTest 1 2 21 100 100
java net/tinyos/radiotest/RadioTest 2 3 21 100 100
java net/tinyos/radiotest/RadioTest 1 3 21 100 100
java net/tinyos/radiotest/RadioTest 3 1 21 100 100
java net/tinyos/radiotest/RadioTest 2 3 21 100 100
java net/tinyos/radiotest/RadioTest 1 2 21 100 100
java net/tinyos/radiotest/RadioTest 2 3 21 100 100
java net/tinyos/radiotest/RadioTest 3 1 21 100 100
cd $TJH
cd $MYJH
java net/tinyos/sf/SerialForwarder -comm serial@COM19:115200

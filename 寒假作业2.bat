@echo off
echo �������ļ����ڴ���
set /p a=
echo ����ת�Ƶ��ô���
cd "%a%"
echo �������ļ�����·��
set /p b=
echo ת�Ƶ��ļ�·��
cd "%b%"
echo �������ļ���
set /p c=
echo ���뿪ʼ
gcc "%c%" -o try.exe
if exist "try.exe" echo ����ɹ�
if not exist "try.exe" echo ����ʧ��
Pause
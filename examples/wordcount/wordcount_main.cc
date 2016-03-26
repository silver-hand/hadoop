/*
**hadoop��mapreduce��ܣ�����map����׼����reduce���ݻ��ܣ�����ͨ���ͻ��˳����hadoop��Ⱥ����ͨ��
**һ��java����ʹ��streaming��׼����c++ʹ��socket�׽���
**map�����ݽڵ���ִ�У����ػ�������ռ�ã�reduce��map�ṩ���ݣ�map���=reduce���룩������ռ�ýϸߣ�
**һ��java��ο�����int��string����c++ֻ��string����Ȼ�򻯽ӿڣ����ܶ�ʱ����Ҫ�˹�ת��
***********************************
**hadoop��Ⱥִ��wordͳ�ƹ���
**hadoopִ��task������runTask
**hadoopִ��job���mapredjob.sh
**HDFS�����ļ���/input/wordcount/sample.txt
**HDFS����ļ���/output/wordcount 
*/
#include "wordcount.h"

int main(int argc, char *argv[]) 
{  
  return HadoopPipes::runTask(HadoopPipes::TemplateFactory<WordcountMapper, WordcountReducer>());  
}  


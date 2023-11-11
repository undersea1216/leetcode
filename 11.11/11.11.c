#include<stdio.h>
#include<string.h>
/* 给你一个字符串 sentence 作为句子并指定检索词为 searchWord ，其中句子由若干用 单个空格 分隔的单词组成。请你检查检索词 searchWord 是否为句子 sentence 中任意单词的前缀。

如果 searchWord 是某一个单词的前缀，则返回句子 sentence 中该单词所对应的下标（下标从 1 开始）。如果 searchWord 是多个单词的前缀，则返回匹配的第一个单词的下标（最小下标）。如果 searchWord 不是任何单词的前缀，则返回 -1 。

字符串 s 的 前缀 是 s 的任何前导连续子字符串。 题目*/

int isPrefixOfWord(char * sentence, char * searchWord)
{
    int length_sentence=strlen(sentence);
    int length_searchWord=strlen(searchWord);
  //  int length_sentence=20;
 //   int length_searchWord=4;
    int i,x,j=0,num=1;          //j：判断sentence里的单词是否全部都相同与searchword
    for(i=0;i<length_sentence;i++)
    {
        if(sentence[i]==' ')        //遇到空格加一，表示这是第几个单词
            num++;

        if(i>0)     //进行搜索
        {
            if(sentence[i]==searchWord[0]&&sentence[i-1]==' '&&(i+length_searchWord<=length_sentence)) //前置条件
            {
                for(x=0;x<length_searchWord;x++)//判断是否全部相同
                {
                    if(sentence[i+x]==searchWord[x])
                        j++;
                }
                if(j==length_searchWord)
                    return num;
                j=0;
            }
        }

        else
        {
            if(sentence[0]==searchWord[0]&&(i+length_searchWord<=length_sentence))
            {
                for(x=0;x<length_searchWord;x++)
                {
                    if(sentence[i+x]==searchWord[x])
                        j++;
                }
                if(j==length_searchWord)
                    return num; 
                j=0;                                   //如果不是要找的单词，将j重置为0，以便下次判断
            }
        }
    }
    return -1;
}

int main()
{
    char sentence[]="dumb dream duck duck i";       //可更改
    char searchWord[]="drea";                       //
    int a=isPrefixOfWord(sentence,searchWord);
    printf("%d",a);
    return 0;
}
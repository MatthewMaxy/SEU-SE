/////////////////////////////////////////////////////////////////////////////////////////////
//文件名：		CCliqueTree_SendCliqueMessage_Downward.cpp
//功  能：		向下发送团消息
//开发者：		高志强
//日  期：		2021年04月04日
//更  新：		2021年05月18日
//长  度：		60行
/////////////////////////////////////////////////////////////////////////////////////////////
#include "stdafx.h"									//MFC标准头文件
#include "CCliqueTree.h"							//团树精确推理类头文件
#include "Helper.h"									//辅助函数头文件


//名  称：		SendCliqueMessage_Downward()
//功  能：		向下发送团消息
//参  数：		unsigned int
//返回值：		无
void CCliqueTree::SendCliqueMessage_Downward(unsigned int nID,unsigned int nChildID)
{
	//找到相交的变量ID集合
	set<unsigned int> CommonVariableIDs;

	//获取两个团的变量ID交集
	FindCommonVariableIDs(nID, nChildID, CommonVariableIDs);
    unsigned int nPos = GetCliquePosByID(nChildID);
    set<unsigned int> Clique_ids = m_Cliques[nChildID].GetVariableIDs();
    set<unsigned int> Eliminate_ids;
    SubtractBetweenSets(Clique_ids, CommonVariableIDs, Eliminate_ids);

    SEP_SET sep_set;
    sep_set.nStartID = nChildID;
    sep_set.nEndID = nID;
    sep_set.clique = m_Cliques[nPos];
    sep_set.bReady = true;

    for (set<unsigned int>::iterator it = Eliminate_ids.begin(); it != Eliminate_ids.end(); it++)
        sep_set.clique.SumOutVariable(*it);
    m_SEPSets.push_back(sep_set);
}
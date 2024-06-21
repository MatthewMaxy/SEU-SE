/////////////////////////////////////////////////////////////////////////////////////////////
//文件名：		CCliqueTree_CreateCliqueWaitedMessages_Downward.cpp
//功  能：		向下传递消息时，创建团的等待消息集合
//开发者：		高志强
//日  期：		2021年04月04日
//更  新：		2021年05月18日
//长  度：		70行
/////////////////////////////////////////////////////////////////////////////////////////////
#include "stdafx.h"									//MFC标准头文件
#include "CCliqueTree.h"							//团树精确推理类头文件
#include "Helper.h"									//辅助函数头文件


//名  称：		CreateCliqueWaitedMessages_Downward()
//功  能：		向下传递消息时，创建团的等待消息集合
//参  数：		map<unsigned int,set<unsigned int>>&
//返回值：		无
void CCliqueTree::CreateCliqueWaitedMessages_Downward(map<unsigned int, set<unsigned int>>& WaitedMessages)
{
	////////////////////////////////////////////////////////////////////////////////
	//步骤1：遍历所有团，初始化向下传递消息时，团的等待消息集合为空
    for (unsigned int i = 0; i < m_CTNodes.size(); i++){
		unsigned int Clique_id= m_CTNodes[i].nID;
		set<unsigned int> null_Message;
		WaitedMessages.insert(make_pair(Clique_id, null_Message));
	}
	for (map<unsigned int, unsigned int>::iterator it = m_UpwardTree.begin(); it != m_UpwardTree.end(); it++){
		unsigned int Parent_id= it->first;
		unsigned int Clique_id= it->second;
		InsertToWaitedMessages(Parent_id, Clique_id, WaitedMessages);
	}
}
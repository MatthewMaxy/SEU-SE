/////////////////////////////////////////////////////////////////////////////////////////////
//文件名：		CFactor_SumOutVariable.cpp
//功  能：		根据给定变量，对因子求和
//开发者：		高志强
//日  期：		2021年03月13日
//更  新：		2021年03月23日
//更  新：		2021年03月29日
//长  度：		150行
/////////////////////////////////////////////////////////////////////////////////////////////
#include "stdafx.h"									//MFC标准头文件
#include "CFactor.h"								//因子类头文件
#include "Helper.h"									//辅助函数头文件


//名  称：		SumOutVariable()
//功  能：		根据给定变量，对因子求和
//参  数：		unsigned int
//返回值：		无
void CFactor::SumOutVariable(unsigned int nVariableID)
{
	//请同学完善
    unsigned int nRemovePos = 0;
    if (IsINTInVector(nVariableID, m_VariableIDs, nRemovePos))
    {
        vector<unsigned int>::iterator it = m_VariableIDs.begin();
        unsigned int nCurPos = 0;
        while (it != m_VariableIDs.end()){
            if (nCurPos == nRemovePos){
                it = m_VariableIDs.erase(it);
                break;
            }
            else{
                nCurPos++;
                it++;
            }
        }

        for (unsigned int i = 0; i < m_FactorRows.size(); i++){
            vector<unsigned int>::iterator it = m_FactorRows[i].ValueIDs.begin();
            unsigned int nCurPos = 0;
            while (it != m_FactorRows[i].ValueIDs.end()){
                if (nCurPos == nRemovePos){
                    it = m_FactorRows[i].ValueIDs.erase(it);
                    break;
                }
                else{
                    nCurPos++;
                    it++;
                }
            }
        }

        vector<FACTOR_ROW> FactorRows;
        while (m_FactorRows.size()>0)
        {
            FACTOR_ROW first_row = m_FactorRows[0];
            MergeIntoFirstRow(first_row);
            FactorRows.push_back(first_row);
        }
        m_FactorRows = FactorRows;
    }
}

//名  称：		MergeIntoFirstRow()
//功  能：		累积因子值到首行
//参  数：		FACTOR_ROW&
//返回值：		无
void CFactor::MergeIntoFirstRow(FACTOR_ROW& first_row)
{
	//遍历所有因子行
	vector<FACTOR_ROW>::iterator it = m_FactorRows.begin();

	//删除首行
	it = m_FactorRows.erase(it);

	//检查是否结束
	while (it != m_FactorRows.end())
	{
		//检查变量值ID的列表是否相等
		if (first_row.ValueIDs == it->ValueIDs)
		{
			//累加因子值
			first_row.fValue += it->fValue;

			//删除、并更新迭代器
			it = m_FactorRows.erase(it);
		}
		else
		{
			//更新迭代器
			it++;
		}
	}
}
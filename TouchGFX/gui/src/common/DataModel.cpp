#include <gui/common/DataModel.hpp>

using namespace std;

void DataModelRestore();
void ConfigStart(void);
void ConfigEnd(void);

// The DataModel is a Singleton class
DataModel instance;

DataModel::DataModel()
{
	m_QuoteIdx = 0;
	m_CurrQuote = T_BENNY1;
}

DataModel* DataModel::getInstance()
{
	return (&instance);
}

void DataModel::Init(void)
{
}

Member_t DataModel::GetMember(TEXTS quoteTextId)
{
	Member_t member = eMemUnknown;
	int idx = 0;

	while ((idx < quoteTableMax) && (quoteTable[idx].quoteTextId != quoteTextId)) idx++;

	if (idx < quoteTableMax)
	{
		member = quoteTable[idx].member;
	}

	return(member);
}

void DataModel::SetNextQuote()
{
	m_CurrQuote = quoteTable[quoteTableSeq[m_QuoteIdx]].quoteTextId;

	m_QuoteIdx++;
	if (m_QuoteIdx >= quoteTableSeqMax) m_QuoteIdx = 0;
}

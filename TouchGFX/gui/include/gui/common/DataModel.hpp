#ifndef DATAMODEL_H
#define DATAMODEL_H

#include <stdint.h>
#include <texts/TextKeysAndLanguages.hpp>

using namespace std;

typedef enum
{
	eMemUnknown,
	eMemEgon,
	eMemBenny,
	eMemKjeld,
	eMemYvonne
} Member_t;

typedef struct
{
	TEXTS    quoteTextId;
	Member_t member;
} QuoteTable_t;

const QuoteTable_t quoteTable[] =
{
		{T_BENNY1, eMemBenny},
		{T_BENNY2, eMemBenny},

		{T_EGON1,  eMemEgon},
		{T_EGON2,  eMemEgon},

		{T_KJELD1, eMemKjeld},
		{T_KJELD2, eMemKjeld},

		{T_YVONNE1, eMemYvonne},
		{T_YVONNE2, eMemYvonne},
		{T_YVONNE3, eMemYvonne}
};

const int quoteTableMax = sizeof(quoteTable) / sizeof(QuoteTable_t);

const int quoteTableSeq[] = { 0, 2, 4, 6, 1, 5, 7, 3, 8 };
const int quoteTableSeqMax = sizeof(quoteTableSeq) / sizeof(int);

class DataModel
{
public:
	static DataModel* getInstance();

	DataModel();
    virtual ~DataModel() {};

	void Init();

    bool IsQuoteCorrect(Member_t member)
    {
    	return (member == GetMember(m_CurrQuote));
    }

    TEXTS GetQuote() { return(m_CurrQuote); }
    void SetNextQuote();

private:
    Member_t GetMember(TEXTS quoteTextId);

    TEXTS m_CurrQuote;
    int   m_QuoteIdx;
};


#endif //DATAMODEL_H

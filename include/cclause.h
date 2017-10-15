#ifndef CCLAUSE_H
#define CCLAUSE_H

#include <vector>
#include "core/SolverTypes.h"
#include "clauses.h"

// TODO - handle empty inputs for operators

class CClause {
private:
    std::vector<Lit> lits;
public:
    CClause(std::vector<Lit>);
    CClause(Lit);
    CClause(Var);
    CClause();
    std::vector<CClause> operator~();
    std::vector<CClause> operator&(const CClause&);
    Clauses operator&(const Clauses&);
    CClause operator|(const CClause&);
    Clauses operator|(const Clauses&);
    std::vector<CClause> operator->(const CClause&);
    Clauses operator->(const Clauses&);
    void createLitAndAdd(Var);
    void createLitAndAdd(Var,Var);
    void createLitAndAdd(Var,Var,Var);
    void addLits(Lit);
    void addLits(Lit,Lit);
    void addLits(Lit,Lit,Lit);
    std::vector<Lit> getLits();
};

#endif


/*
Link between Variable and CClause - and between Variable and Var
CClause stores Lit, not Var


*/
@0      program    children: [@1 @6 @11 @27   ]
@1      statement_declare    children: [@2 @3   ]
@2      type: int    
@3      declare node    children: [@4 @5   ]
@4      variable name: a    type: int    
@5      const type: int    value:0    
@6      statement_declare    children: [@7 @8   ]
@7      type: int    
@8      declare node    children: [@9 @10   ]
@9      variable name: b    type: int    
@10     const type: int    value:2    
@11     statement_if    children: [@12 @16 @21   ]
@12     operator type: !    children: [@13   ]
@13     operator type: ==    children: [@14 @15   ]
@14     const type: int    value:2    
@15     const type: int    value:3    
@16     statement_declare    children: [@17 @18   ]
@17     type: int    
@18     declare node    children: [@19 @20   ]
@19     variable name: a    type: int    
@20     const type: int    value:2    
@21     statement_expression    children: [@22   ]
@22     operator type: +    children: [@23 @26   ]
@23     operator type: =    children: [@24 @25   ]
@24     variable name: a    type: int    
@25     variable name: a    type: int    
@26     const type: int    value:2    
@27     statement_while    children: [@28 @31   ]
@28     operator type: ==    children: [@29 @30   ]
@29     variable name: a    type: int    
@30     variable name: b    type: int    
@31     statement_printf    children: [@32   ]
@32     variable name: a    type: int    

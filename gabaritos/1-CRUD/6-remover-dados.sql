-- Da tabela invoice, remova o invoice cujo o InvoiceID corresponda ao valor 33
DELETE FROM invoices
WHERE InvoiceID = 33;

-- Da tabela invoice, remova todos os invoices cujo o Total seja menor do que 1
DELETE FROM invoices
WHERE Total < 1;
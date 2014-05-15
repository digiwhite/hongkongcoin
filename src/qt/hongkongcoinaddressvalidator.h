#ifndef HONGKONGCOINADDRESSVALIDATOR_H
#define HONGKONGCOINADDRESSVALIDATOR_H

#include <QValidator>

/** Base58 entry widget validator.
   Corrects near-miss characters and refuses characters that are not part of base58.
 */
class HongKongCoinAddressValidator : public QValidator
{
    Q_OBJECT

public:
    explicit HongKongCoinAddressValidator(QObject *parent = 0);

    State validate(QString &input, int &pos) const;

    static const int MaxAddressLength = 35;
};

#endif // HONGKONGCOINADDRESSVALIDATOR_H

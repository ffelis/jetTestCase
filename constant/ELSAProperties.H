
CstELSASigmaMin    CstELSASigmaMin [0 0 0 0 0 0 0] 2.4;

ELSASurfaceTensionCoef   ELSASurfaceTensionCoef [1 0 -2 0 0 0 0] 0.07;


// Previous non validated value Lebas
/*
ELSAWeberEquil   ELSAWeberEquil [0 0 0 0 0 0 0] 1; // --activate the previous definition of Equli Weber
                                                   // in sigmaPrimeEqn.H
CTurbELSASigmaPrime CTurbELSASigmaPrime [0 0 0 0 0 0 0] 1;
*/

// Value from B. Duret IJMF 2013

// model for equilibriume surface density choice between 
//Lebas IJMF 2009 ==> webEquilMod=0.
//webEquilMod webEquilMod[[0 0 0 0 0 0 0] 0.;
//ELSAWeberEquil   ELSAWeberEquil [0 0 0 0 0 0 0] 1.;
//CTurbELSASigmaPrime CTurbELSASigmaPrime [0 0 0 0 0 0 0] 1.;
//  and Duret IJMF 2013  ==> webEquilMod=1.
webEquilMod webEquilMod [0 0 0 0 0 0 0] 1.;
ELSAWeberEquil   ELSAWeberEquil [0 0 0 0 0 0 0] 1.5;
CTurbELSASigmaPrime CTurbELSASigmaPrime [0 0 0 0 0 0 0] 0.4;


// Cavitation Only

//microbuble for cavitation from boundary condition
minELSASigma minELSASigma [0 -1 0 0 0 0 0] 4.03E+001;
maxELSASigma maxELSASigma [0 -1 0 0 0 0 0] 1.0e99;


minAlpha1 minAlpha1 [0 0 0 0 0 0 0] 7.60E-007;
//microbuble for cavitation from boundary condition
maxAlpha1 maxAlpha1 [0 0 0 0 0 0 0] 0.999999240; 

rhoVapor   rhoVapor [1 -3 0 0 0 0 0] 60;

// ************************************************************************* //

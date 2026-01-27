# The toplevel directory of the source tree.
#
MY_TARGET = libgmp

ROOT = ..\..\..
!include "$(ROOT)\system.mak"

TOP = .

HHEADERS = config.h \
           gmp-impl.h \
           gmp-mparam.h \
           longlong.h \
           mpir.h

OBJECTS =  \
    $(OBJD)\libgmp\assert.obj \
    $(OBJD)\libgmp\errno.obj \
    $(OBJD)\libgmp\extract-dbl.obj \
    $(OBJD)\libgmp\fft\adjust.obj \
    $(OBJD)\libgmp\fft\adjust_sqrt2.obj \
    $(OBJD)\libgmp\fft\butterfly_lshB.obj \
    $(OBJD)\libgmp\fft\butterfly_rshB.obj \
    $(OBJD)\libgmp\fft\combine_bits.obj \
    $(OBJD)\libgmp\fft\div_2expmod_2expp1.obj \
    $(OBJD)\libgmp\fft\fermat_to_mpz.obj \
    $(OBJD)\libgmp\fft\fft_mfa_trunc_sqrt2.obj \
    $(OBJD)\libgmp\fft\fft_mfa_trunc_sqrt2_inner.obj \
    $(OBJD)\libgmp\fft\fft_negacyclic.obj \
    $(OBJD)\libgmp\fft\fft_radix2.obj \
    $(OBJD)\libgmp\fft\fft_trunc.obj \
    $(OBJD)\libgmp\fft\fft_trunc_sqrt2.obj \
    $(OBJD)\libgmp\fft\ifft_mfa_trunc_sqrt2.obj \
    $(OBJD)\libgmp\fft\ifft_negacyclic.obj \
    $(OBJD)\libgmp\fft\ifft_radix2.obj \
    $(OBJD)\libgmp\fft\ifft_trunc.obj \
    $(OBJD)\libgmp\fft\ifft_trunc_sqrt2.obj \
    $(OBJD)\libgmp\fft\mulmod_2expp1.obj \
    $(OBJD)\libgmp\fft\mul_2expmod_2expp1.obj \
    $(OBJD)\libgmp\fft\mul_fft_main.obj \
    $(OBJD)\libgmp\fft\mul_mfa_trunc_sqrt2.obj \
    $(OBJD)\libgmp\fft\mul_trunc_sqrt2.obj \
    $(OBJD)\libgmp\fft\normmod_2expp1.obj \
    $(OBJD)\libgmp\fft\revbin.obj \
    $(OBJD)\libgmp\fft\split_bits.obj \
    $(OBJD)\libgmp\invalid.obj \
    $(OBJD)\libgmp\memory.obj \
    $(OBJD)\libgmp\mpf\abs.obj \
    $(OBJD)\libgmp\mpf\add.obj \
    $(OBJD)\libgmp\mpf\add_ui.obj \
    $(OBJD)\libgmp\mpf\ceilfloor.obj \
    $(OBJD)\libgmp\mpf\clear.obj \
    $(OBJD)\libgmp\mpf\clears.obj \
    $(OBJD)\libgmp\mpf\cmp.obj \
    $(OBJD)\libgmp\mpf\cmp_d.obj \
    $(OBJD)\libgmp\mpf\cmp_si.obj \
    $(OBJD)\libgmp\mpf\cmp_ui.obj \
    $(OBJD)\libgmp\mpf\cmp_z.obj \
    $(OBJD)\libgmp\mpf\div.obj \
    $(OBJD)\libgmp\mpf\div_2exp.obj \
    $(OBJD)\libgmp\mpf\div_ui.obj \
    $(OBJD)\libgmp\mpf\dump.obj \
    $(OBJD)\libgmp\mpf\eq.obj \
    $(OBJD)\libgmp\mpf\fits_si.obj \
    $(OBJD)\libgmp\mpf\fits_sint.obj \
    $(OBJD)\libgmp\mpf\fits_slong.obj \
    $(OBJD)\libgmp\mpf\fits_sshort.obj \
    $(OBJD)\libgmp\mpf\fits_ui.obj \
    $(OBJD)\libgmp\mpf\fits_uint.obj \
    $(OBJD)\libgmp\mpf\fits_ulong.obj \
    $(OBJD)\libgmp\mpf\fits_ushort.obj \
    $(OBJD)\libgmp\mpf\get_d.obj \
    $(OBJD)\libgmp\mpf\get_dfl_prec.obj \
    $(OBJD)\libgmp\mpf\get_d_2exp.obj \
    $(OBJD)\libgmp\mpf\get_prc.obj \
    $(OBJD)\libgmp\mpf\get_si.obj \
    $(OBJD)\libgmp\mpf\get_str.obj \
    $(OBJD)\libgmp\mpf\get_ui.obj \
    $(OBJD)\libgmp\mpf\init.obj \
    $(OBJD)\libgmp\mpf\init2.obj \
    $(OBJD)\libgmp\mpf\inits.obj \
    $(OBJD)\libgmp\mpf\inp_str.obj \
    $(OBJD)\libgmp\mpf\int_p.obj \
    $(OBJD)\libgmp\mpf\iset.obj \
    $(OBJD)\libgmp\mpf\iset_d.obj \
    $(OBJD)\libgmp\mpf\iset_si.obj \
    $(OBJD)\libgmp\mpf\iset_str.obj \
    $(OBJD)\libgmp\mpf\iset_ui.obj \
    $(OBJD)\libgmp\mpf\mul.obj \
    $(OBJD)\libgmp\mpf\mul_2exp.obj \
    $(OBJD)\libgmp\mpf\mul_ui.obj \
    $(OBJD)\libgmp\mpf\neg.obj \
    $(OBJD)\libgmp\mpf\out_str.obj \
    $(OBJD)\libgmp\mpf\pow_ui.obj \
    $(OBJD)\libgmp\mpf\random2.obj \
    $(OBJD)\libgmp\mpf\reldiff.obj \
    $(OBJD)\libgmp\mpf\rrandomb.obj \
    $(OBJD)\libgmp\mpf\set.obj \
    $(OBJD)\libgmp\mpf\set_d.obj \
    $(OBJD)\libgmp\mpf\set_dfl_prec.obj \
    $(OBJD)\libgmp\mpf\set_prc.obj \
    $(OBJD)\libgmp\mpf\set_prc_raw.obj \
    $(OBJD)\libgmp\mpf\set_q.obj \
    $(OBJD)\libgmp\mpf\set_si.obj \
    $(OBJD)\libgmp\mpf\set_str.obj \
    $(OBJD)\libgmp\mpf\set_ui.obj \
    $(OBJD)\libgmp\mpf\set_z.obj \
    $(OBJD)\libgmp\mpf\size.obj \
    $(OBJD)\libgmp\mpf\sqrt.obj \
    $(OBJD)\libgmp\mpf\sqrt_ui.obj \
    $(OBJD)\libgmp\mpf\sub.obj \
    $(OBJD)\libgmp\mpf\sub_ui.obj \
    $(OBJD)\libgmp\mpf\swap.obj \
    $(OBJD)\libgmp\mpf\trunc.obj \
    $(OBJD)\libgmp\mpf\ui_div.obj \
    $(OBJD)\libgmp\mpf\ui_sub.obj \
    $(OBJD)\libgmp\mpf\urandomb.obj \
    $(OBJD)\libgmp\mpn\add.obj \
    $(OBJD)\libgmp\mpn\addadd_n.obj \
    $(OBJD)\libgmp\mpn\addmul_1.obj \
    $(OBJD)\libgmp\mpn\addsub_n.obj \
    $(OBJD)\libgmp\mpn\add_1.obj \
    $(OBJD)\libgmp\mpn\add_err1_n.obj \
    $(OBJD)\libgmp\mpn\add_err2_n.obj \
    $(OBJD)\libgmp\mpn\add_n.obj \
    $(OBJD)\libgmp\mpn\andn_n.obj \
    $(OBJD)\libgmp\mpn\and_n.obj \
    $(OBJD)\libgmp\mpn\bdivmod.obj \
    $(OBJD)\libgmp\mpn\binvert.obj \
    $(OBJD)\libgmp\mpn\cmp.obj \
    $(OBJD)\libgmp\mpn\comb_tables.obj \
    $(OBJD)\libgmp\mpn\com_n.obj \
    $(OBJD)\libgmp\mpn\copyd.obj \
    $(OBJD)\libgmp\mpn\copyi.obj \
    $(OBJD)\libgmp\mpn\dc_bdiv_q.obj \
    $(OBJD)\libgmp\mpn\dc_bdiv_qr.obj \
    $(OBJD)\libgmp\mpn\dc_bdiv_qr_n.obj \
    $(OBJD)\libgmp\mpn\dc_bdiv_q_n.obj \
    $(OBJD)\libgmp\mpn\dc_divappr_q.obj \
    $(OBJD)\libgmp\mpn\dc_div_q.obj \
    $(OBJD)\libgmp\mpn\dc_div_qr.obj \
    $(OBJD)\libgmp\mpn\dc_div_qr_n.obj \
    $(OBJD)\libgmp\mpn\divexact.obj \
    $(OBJD)\libgmp\mpn\divexact_1.obj \
    $(OBJD)\libgmp\mpn\divexact_by3c.obj \
    $(OBJD)\libgmp\mpn\divexact_byff.obj \
    $(OBJD)\libgmp\mpn\divexact_byfobm1.obj \
    $(OBJD)\libgmp\mpn\divisible_p.obj \
    $(OBJD)\libgmp\mpn\divrem.obj \
    $(OBJD)\libgmp\mpn\divrem_1.obj \
    $(OBJD)\libgmp\mpn\divrem_2.obj \
    $(OBJD)\libgmp\mpn\divrem_euclidean_qr_1.obj \
    $(OBJD)\libgmp\mpn\divrem_euclidean_qr_2.obj \
    $(OBJD)\libgmp\mpn\divrem_euclidean_r_1.obj \
    $(OBJD)\libgmp\mpn\divrem_hensel_qr_1.obj \
    $(OBJD)\libgmp\mpn\divrem_hensel_qr_1_1.obj \
    $(OBJD)\libgmp\mpn\divrem_hensel_qr_1_2.obj \
    $(OBJD)\libgmp\mpn\divrem_hensel_rsh_qr_1.obj \
    $(OBJD)\libgmp\mpn\divrem_hensel_r_1.obj \
    $(OBJD)\libgmp\mpn\dump.obj \
    $(OBJD)\libgmp\mpn\fib2_ui.obj \
    $(OBJD)\libgmp\mpn\fib_table.obj \
    $(OBJD)\libgmp\mpn\gcd.obj \
    $(OBJD)\libgmp\mpn\gcdext.obj \
    $(OBJD)\libgmp\mpn\gcdext_1.obj \
    $(OBJD)\libgmp\mpn\gcdext_lehmer.obj \
    $(OBJD)\libgmp\mpn\gcd_1.obj \
    $(OBJD)\libgmp\mpn\gcd_subdiv_step.obj \
    $(OBJD)\libgmp\mpn\get_d.obj \
    $(OBJD)\libgmp\mpn\get_str.obj \
    $(OBJD)\libgmp\mpn\hamdist.obj \
    $(OBJD)\libgmp\mpn\hgcd.obj \
    $(OBJD)\libgmp\mpn\hgcd2.obj \
    $(OBJD)\libgmp\mpn\hgcd2_jacobi.obj \
    $(OBJD)\libgmp\mpn\hgcd_appr.obj \
    $(OBJD)\libgmp\mpn\hgcd_jacobi.obj \
    $(OBJD)\libgmp\mpn\hgcd_matrix.obj \
    $(OBJD)\libgmp\mpn\hgcd_reduce.obj \
    $(OBJD)\libgmp\mpn\hgcd_step.obj \
    $(OBJD)\libgmp\mpn\invert.obj \
    $(OBJD)\libgmp\mpn\inv_divappr_q.obj \
    $(OBJD)\libgmp\mpn\inv_divappr_q_n.obj \
    $(OBJD)\libgmp\mpn\inv_div_q.obj \
    $(OBJD)\libgmp\mpn\inv_div_qr.obj \
    $(OBJD)\libgmp\mpn\inv_div_qr_n.obj \
    $(OBJD)\libgmp\mpn\iorn_n.obj \
    $(OBJD)\libgmp\mpn\ior_n.obj \
    $(OBJD)\libgmp\mpn\jacobi.obj \
    $(OBJD)\libgmp\mpn\jacobi_2.obj \
    $(OBJD)\libgmp\mpn\jacobi_base.obj \
    $(OBJD)\libgmp\mpn\lshift.obj \
    $(OBJD)\libgmp\mpn\matrix22_mul.obj \
    $(OBJD)\libgmp\mpn\matrix22_mul1_inverse_vector.obj \
    $(OBJD)\libgmp\mpn\modexact_1c_odd.obj \
    $(OBJD)\libgmp\mpn\mod_1.obj \
    $(OBJD)\libgmp\mpn\mod_1_1.obj \
    $(OBJD)\libgmp\mpn\mod_1_2.obj \
    $(OBJD)\libgmp\mpn\mod_1_3.obj \
    $(OBJD)\libgmp\mpn\mod_34lsub1.obj \
    $(OBJD)\libgmp\mpn\mp_bases.obj \
    $(OBJD)\libgmp\mpn\mul.obj \
    $(OBJD)\libgmp\mpn\mulhigh_n.obj \
    $(OBJD)\libgmp\mpn\mullow_basecase.obj \
    $(OBJD)\libgmp\mpn\mullow_n.obj \
    $(OBJD)\libgmp\mpn\mullow_n_basecase.obj \
    $(OBJD)\libgmp\mpn\mulmid.obj \
    $(OBJD)\libgmp\mpn\mulmid_basecase.obj \
    $(OBJD)\libgmp\mpn\mulmid_n.obj \
    $(OBJD)\libgmp\mpn\mulmod_2expm1.obj \
    $(OBJD)\libgmp\mpn\mulmod_2expp1_basecase.obj \
    $(OBJD)\libgmp\mpn\mulmod_bexpp1.obj \
    $(OBJD)\libgmp\mpn\mul_1.obj \
    $(OBJD)\libgmp\mpn\mul_basecase.obj \
    $(OBJD)\libgmp\mpn\mul_fft.obj \
    $(OBJD)\libgmp\mpn\mul_n.obj \
    $(OBJD)\libgmp\mpn\nand_n.obj \
    $(OBJD)\libgmp\mpn\neg_n.obj \
    $(OBJD)\libgmp\mpn\nior_n.obj \
    $(OBJD)\libgmp\mpn\nsumdiff_n.obj \
    $(OBJD)\libgmp\mpn\perfect_square_p.obj \
    $(OBJD)\libgmp\mpn\popcount.obj \
    $(OBJD)\libgmp\mpn\powlo.obj \
    $(OBJD)\libgmp\mpn\powm.obj \
    $(OBJD)\libgmp\mpn\pow_1.obj \
    $(OBJD)\libgmp\mpn\preinv_divrem_1.obj \
    $(OBJD)\libgmp\mpn\preinv_mod_1.obj \
    $(OBJD)\libgmp\mpn\random.obj \
    $(OBJD)\libgmp\mpn\random2.obj \
    $(OBJD)\libgmp\mpn\randomb.obj \
    $(OBJD)\libgmp\mpn\redc_1.obj \
    $(OBJD)\libgmp\mpn\redc_2.obj \
    $(OBJD)\libgmp\mpn\redc_n.obj \
    $(OBJD)\libgmp\mpn\rootrem.obj \
    $(OBJD)\libgmp\mpn\rootrem_basecase.obj \
    $(OBJD)\libgmp\mpn\rrandom.obj \
    $(OBJD)\libgmp\mpn\rshift.obj \
    $(OBJD)\libgmp\mpn\rsh_divrem_hensel_qr_1.obj \
    $(OBJD)\libgmp\mpn\rsh_divrem_hensel_qr_1_1.obj \
    $(OBJD)\libgmp\mpn\rsh_divrem_hensel_qr_1_2.obj \
    $(OBJD)\libgmp\mpn\sb_bdiv_q.obj \
    $(OBJD)\libgmp\mpn\sb_bdiv_qr.obj \
    $(OBJD)\libgmp\mpn\sb_divappr_q.obj \
    $(OBJD)\libgmp\mpn\sb_div_q.obj \
    $(OBJD)\libgmp\mpn\sb_div_qr.obj \
    $(OBJD)\libgmp\mpn\scan0.obj \
    $(OBJD)\libgmp\mpn\scan1.obj \
    $(OBJD)\libgmp\mpn\set_str.obj \
    $(OBJD)\libgmp\mpn\sizeinbase.obj \
    $(OBJD)\libgmp\mpn\sqrtrem.obj \
    $(OBJD)\libgmp\mpn\sqr_basecase.obj \
    $(OBJD)\libgmp\mpn\sub.obj \
    $(OBJD)\libgmp\mpn\subadd_n.obj \
    $(OBJD)\libgmp\mpn\submul_1.obj \
    $(OBJD)\libgmp\mpn\sub_1.obj \
    $(OBJD)\libgmp\mpn\sub_err1_n.obj \
    $(OBJD)\libgmp\mpn\sub_err2_n.obj \
    $(OBJD)\libgmp\mpn\sub_n.obj \
    $(OBJD)\libgmp\mpn\sumdiff_n.obj \
    $(OBJD)\libgmp\mpn\tdiv_q.obj \
    $(OBJD)\libgmp\mpn\tdiv_qr.obj \
    $(OBJD)\libgmp\mpn\toom3_mul.obj \
    $(OBJD)\libgmp\mpn\toom3_mul_n.obj \
    $(OBJD)\libgmp\mpn\toom42_mulmid.obj \
    $(OBJD)\libgmp\mpn\toom4_mul.obj \
    $(OBJD)\libgmp\mpn\toom4_mul_n.obj \
    $(OBJD)\libgmp\mpn\toom8h_mul.obj \
    $(OBJD)\libgmp\mpn\toom8_sqr_n.obj \
    $(OBJD)\libgmp\mpn\toom_couple_handling.obj \
    $(OBJD)\libgmp\mpn\toom_eval_dgr3_pm1.obj \
    $(OBJD)\libgmp\mpn\toom_eval_dgr3_pm2.obj \
    $(OBJD)\libgmp\mpn\toom_eval_pm1.obj \
    $(OBJD)\libgmp\mpn\toom_eval_pm2.obj \
    $(OBJD)\libgmp\mpn\toom_eval_pm2exp.obj \
    $(OBJD)\libgmp\mpn\toom_eval_pm2rexp.obj \
    $(OBJD)\libgmp\mpn\toom_interpolate_16pts.obj \
    $(OBJD)\libgmp\mpn\urandomb.obj \
    $(OBJD)\libgmp\mpn\urandomm.obj \
    $(OBJD)\libgmp\mpn\xnor_n.obj \
    $(OBJD)\libgmp\mpn\xor_n.obj \
    $(OBJD)\libgmp\mpn\zero.obj \
    $(OBJD)\libgmp\mpn\zero_p.obj \
    $(OBJD)\libgmp\mpq\abs.obj \
    $(OBJD)\libgmp\mpq\aors.obj \
    $(OBJD)\libgmp\mpq\canonicalize.obj \
    $(OBJD)\libgmp\mpq\clear.obj \
    $(OBJD)\libgmp\mpq\clears.obj \
    $(OBJD)\libgmp\mpq\cmp.obj \
    $(OBJD)\libgmp\mpq\cmp_si.obj \
    $(OBJD)\libgmp\mpq\cmp_ui.obj \
    $(OBJD)\libgmp\mpq\div.obj \
    $(OBJD)\libgmp\mpq\equal.obj \
    $(OBJD)\libgmp\mpq\get_d.obj \
    $(OBJD)\libgmp\mpq\get_den.obj \
    $(OBJD)\libgmp\mpq\get_num.obj \
    $(OBJD)\libgmp\mpq\get_str.obj \
    $(OBJD)\libgmp\mpq\init.obj \
    $(OBJD)\libgmp\mpq\inits.obj \
    $(OBJD)\libgmp\mpq\inp_str.obj \
    $(OBJD)\libgmp\mpq\inv.obj \
    $(OBJD)\libgmp\mpq\md_2exp.obj \
    $(OBJD)\libgmp\mpq\mul.obj \
    $(OBJD)\libgmp\mpq\neg.obj \
    $(OBJD)\libgmp\mpq\out_str.obj \
    $(OBJD)\libgmp\mpq\set.obj \
    $(OBJD)\libgmp\mpq\set_d.obj \
    $(OBJD)\libgmp\mpq\set_den.obj \
    $(OBJD)\libgmp\mpq\set_f.obj \
    $(OBJD)\libgmp\mpq\set_num.obj \
    $(OBJD)\libgmp\mpq\set_si.obj \
    $(OBJD)\libgmp\mpq\set_str.obj \
    $(OBJD)\libgmp\mpq\set_ui.obj \
    $(OBJD)\libgmp\mpq\set_z.obj \
    $(OBJD)\libgmp\mpq\swap.obj \
    $(OBJD)\libgmp\mpz\2fac_ui.obj \
    $(OBJD)\libgmp\mpz\abs.obj \
    $(OBJD)\libgmp\mpz\add.obj \
    $(OBJD)\libgmp\mpz\add_ui.obj \
    $(OBJD)\libgmp\mpz\and.obj \
    $(OBJD)\libgmp\mpz\aorsmul.obj \
    $(OBJD)\libgmp\mpz\aorsmul_i.obj \
    $(OBJD)\libgmp\mpz\array_init.obj \
    $(OBJD)\libgmp\mpz\bin_ui.obj \
    $(OBJD)\libgmp\mpz\bin_uiui.obj \
    $(OBJD)\libgmp\mpz\cdiv_q.obj \
    $(OBJD)\libgmp\mpz\cdiv_qr.obj \
    $(OBJD)\libgmp\mpz\cdiv_qr_ui.obj \
    $(OBJD)\libgmp\mpz\cdiv_q_ui.obj \
    $(OBJD)\libgmp\mpz\cdiv_r.obj \
    $(OBJD)\libgmp\mpz\cdiv_r_ui.obj \
    $(OBJD)\libgmp\mpz\cdiv_ui.obj \
    $(OBJD)\libgmp\mpz\cfdiv_q_2exp.obj \
    $(OBJD)\libgmp\mpz\cfdiv_r_2exp.obj \
    $(OBJD)\libgmp\mpz\clear.obj \
    $(OBJD)\libgmp\mpz\clears.obj \
    $(OBJD)\libgmp\mpz\clrbit.obj \
    $(OBJD)\libgmp\mpz\cmp.obj \
    $(OBJD)\libgmp\mpz\cmpabs.obj \
    $(OBJD)\libgmp\mpz\cmpabs_d.obj \
    $(OBJD)\libgmp\mpz\cmpabs_ui.obj \
    $(OBJD)\libgmp\mpz\cmp_d.obj \
    $(OBJD)\libgmp\mpz\cmp_si.obj \
    $(OBJD)\libgmp\mpz\cmp_ui.obj \
    $(OBJD)\libgmp\mpz\com.obj \
    $(OBJD)\libgmp\mpz\combit.obj \
    $(OBJD)\libgmp\mpz\cong.obj \
    $(OBJD)\libgmp\mpz\cong_2exp.obj \
    $(OBJD)\libgmp\mpz\cong_ui.obj \
    $(OBJD)\libgmp\mpz\divegcd.obj \
    $(OBJD)\libgmp\mpz\divexact.obj \
    $(OBJD)\libgmp\mpz\dive_ui.obj \
    $(OBJD)\libgmp\mpz\divis.obj \
    $(OBJD)\libgmp\mpz\divis_2exp.obj \
    $(OBJD)\libgmp\mpz\divis_ui.obj \
    $(OBJD)\libgmp\mpz\dump.obj \
    $(OBJD)\libgmp\mpz\export.obj \
    $(OBJD)\libgmp\mpz\fac_ui.obj \
    $(OBJD)\libgmp\mpz\fdiv_q.obj \
    $(OBJD)\libgmp\mpz\fdiv_qr.obj \
    $(OBJD)\libgmp\mpz\fdiv_qr_ui.obj \
    $(OBJD)\libgmp\mpz\fdiv_q_ui.obj \
    $(OBJD)\libgmp\mpz\fdiv_r.obj \
    $(OBJD)\libgmp\mpz\fdiv_r_ui.obj \
    $(OBJD)\libgmp\mpz\fdiv_ui.obj \
    $(OBJD)\libgmp\mpz\fib2_ui.obj \
    $(OBJD)\libgmp\mpz\fib_ui.obj \
    $(OBJD)\libgmp\mpz\fits_si.obj \
    $(OBJD)\libgmp\mpz\fits_sint.obj \
    $(OBJD)\libgmp\mpz\fits_slong.obj \
    $(OBJD)\libgmp\mpz\fits_sshort.obj \
    $(OBJD)\libgmp\mpz\fits_ui.obj \
    $(OBJD)\libgmp\mpz\fits_uint.obj \
    $(OBJD)\libgmp\mpz\fits_ulong.obj \
    $(OBJD)\libgmp\mpz\fits_ushort.obj \
    $(OBJD)\libgmp\mpz\gcd.obj \
    $(OBJD)\libgmp\mpz\gcdext.obj \
    $(OBJD)\libgmp\mpz\gcd_ui.obj \
    $(OBJD)\libgmp\mpz\getlimbn.obj \
    $(OBJD)\libgmp\mpz\get_d.obj \
    $(OBJD)\libgmp\mpz\get_d_2exp.obj \
    $(OBJD)\libgmp\mpz\get_si.obj \
    $(OBJD)\libgmp\mpz\get_str.obj \
    $(OBJD)\libgmp\mpz\get_sx.obj \
    $(OBJD)\libgmp\mpz\get_ui.obj \
    $(OBJD)\libgmp\mpz\get_ux.obj \
    $(OBJD)\libgmp\mpz\hamdist.obj \
    $(OBJD)\libgmp\mpz\import.obj \
    $(OBJD)\libgmp\mpz\init.obj \
    $(OBJD)\libgmp\mpz\init2.obj \
    $(OBJD)\libgmp\mpz\inits.obj \
    $(OBJD)\libgmp\mpz\inp_raw.obj \
    $(OBJD)\libgmp\mpz\inp_str.obj \
    $(OBJD)\libgmp\mpz\invert.obj \
    $(OBJD)\libgmp\mpz\ior.obj \
    $(OBJD)\libgmp\mpz\iset.obj \
    $(OBJD)\libgmp\mpz\iset_d.obj \
    $(OBJD)\libgmp\mpz\iset_si.obj \
    $(OBJD)\libgmp\mpz\iset_str.obj \
    $(OBJD)\libgmp\mpz\iset_sx.obj \
    $(OBJD)\libgmp\mpz\iset_ui.obj \
    $(OBJD)\libgmp\mpz\iset_ux.obj \
    $(OBJD)\libgmp\mpz\jacobi.obj \
    $(OBJD)\libgmp\mpz\kronsz.obj \
    $(OBJD)\libgmp\mpz\kronuz.obj \
    $(OBJD)\libgmp\mpz\kronzs.obj \
    $(OBJD)\libgmp\mpz\kronzu.obj \
    $(OBJD)\libgmp\mpz\lcm.obj \
    $(OBJD)\libgmp\mpz\lcm_ui.obj \
    $(OBJD)\libgmp\mpz\likely_prime_p.obj \
    $(OBJD)\libgmp\mpz\limbs_finish.obj \
    $(OBJD)\libgmp\mpz\limbs_modify.obj \
    $(OBJD)\libgmp\mpz\limbs_read.obj \
    $(OBJD)\libgmp\mpz\limbs_write.obj \
    $(OBJD)\libgmp\mpz\lucnum2_ui.obj \
    $(OBJD)\libgmp\mpz\lucnum_ui.obj \
    $(OBJD)\libgmp\mpz\mfac_uiui.obj \
    $(OBJD)\libgmp\mpz\millerrabin.obj \
    $(OBJD)\libgmp\mpz\miller_rabin.obj \
    $(OBJD)\libgmp\mpz\mod.obj \
    $(OBJD)\libgmp\mpz\mul.obj \
    $(OBJD)\libgmp\mpz\mul_2exp.obj \
    $(OBJD)\libgmp\mpz\mul_si.obj \
    $(OBJD)\libgmp\mpz\mul_ui.obj \
    $(OBJD)\libgmp\mpz\neg.obj \
    $(OBJD)\libgmp\mpz\nextprime.obj \
    $(OBJD)\libgmp\mpz\next_prime_candidate.obj \
    $(OBJD)\libgmp\mpz\nthroot.obj \
    $(OBJD)\libgmp\mpz\n_pow_ui.obj \
    $(OBJD)\libgmp\mpz\oddfac_1.obj \
    $(OBJD)\libgmp\mpz\out_raw.obj \
    $(OBJD)\libgmp\mpz\out_str.obj \
    $(OBJD)\libgmp\mpz\perfpow.obj \
    $(OBJD)\libgmp\mpz\perfsqr.obj \
    $(OBJD)\libgmp\mpz\popcount.obj \
    $(OBJD)\libgmp\mpz\powm.obj \
    $(OBJD)\libgmp\mpz\powm_ui.obj \
    $(OBJD)\libgmp\mpz\pow_ui.obj \
    $(OBJD)\libgmp\mpz\pprime_p.obj \
    $(OBJD)\libgmp\mpz\primorial_ui.obj \
    $(OBJD)\libgmp\mpz\probable_prime_p.obj \
    $(OBJD)\libgmp\mpz\prodlimbs.obj \
    $(OBJD)\libgmp\mpz\realloc.obj \
    $(OBJD)\libgmp\mpz\realloc2.obj \
    $(OBJD)\libgmp\mpz\remove.obj \
    $(OBJD)\libgmp\mpz\roinit_n.obj \
    $(OBJD)\libgmp\mpz\root.obj \
    $(OBJD)\libgmp\mpz\rootrem.obj \
    $(OBJD)\libgmp\mpz\rrandomb.obj \
    $(OBJD)\libgmp\mpz\scan0.obj \
    $(OBJD)\libgmp\mpz\scan1.obj \
    $(OBJD)\libgmp\mpz\set.obj \
    $(OBJD)\libgmp\mpz\setbit.obj \
    $(OBJD)\libgmp\mpz\set_d.obj \
    $(OBJD)\libgmp\mpz\set_f.obj \
    $(OBJD)\libgmp\mpz\set_q.obj \
    $(OBJD)\libgmp\mpz\set_si.obj \
    $(OBJD)\libgmp\mpz\set_str.obj \
    $(OBJD)\libgmp\mpz\set_sx.obj \
    $(OBJD)\libgmp\mpz\set_ui.obj \
    $(OBJD)\libgmp\mpz\set_ux.obj \
    $(OBJD)\libgmp\mpz\size.obj \
    $(OBJD)\libgmp\mpz\sizeinbase.obj \
    $(OBJD)\libgmp\mpz\sqrt.obj \
    $(OBJD)\libgmp\mpz\sqrtrem.obj \
    $(OBJD)\libgmp\mpz\sub.obj \
    $(OBJD)\libgmp\mpz\sub_ui.obj \
    $(OBJD)\libgmp\mpz\swap.obj \
    $(OBJD)\libgmp\mpz\tdiv_q.obj \
    $(OBJD)\libgmp\mpz\tdiv_qr.obj \
    $(OBJD)\libgmp\mpz\tdiv_qr_ui.obj \
    $(OBJD)\libgmp\mpz\tdiv_q_2exp.obj \
    $(OBJD)\libgmp\mpz\tdiv_q_ui.obj \
    $(OBJD)\libgmp\mpz\tdiv_r.obj \
    $(OBJD)\libgmp\mpz\tdiv_r_2exp.obj \
    $(OBJD)\libgmp\mpz\tdiv_r_ui.obj \
    $(OBJD)\libgmp\mpz\tdiv_ui.obj \
    $(OBJD)\libgmp\mpz\trial_division.obj \
    $(OBJD)\libgmp\mpz\tstbit.obj \
    $(OBJD)\libgmp\mpz\ui_pow_ui.obj \
    $(OBJD)\libgmp\mpz\ui_sub.obj \
    $(OBJD)\libgmp\mpz\urandomb.obj \
    $(OBJD)\libgmp\mpz\urandomm.obj \
    $(OBJD)\libgmp\mpz\xor.obj \
    $(OBJD)\libgmp\mp_bpl.obj \
    $(OBJD)\libgmp\mp_clz_tab.obj \
    $(OBJD)\libgmp\mp_dv_tab.obj \
    $(OBJD)\libgmp\mp_get_fns.obj \
    $(OBJD)\libgmp\mp_minv_tab.obj \
    $(OBJD)\libgmp\mp_set_fns.obj \
    $(OBJD)\libgmp\nextprime.obj \
    $(OBJD)\libgmp\primesieve.obj \
    $(OBJD)\libgmp\printf\asprintf.obj \
    $(OBJD)\libgmp\printf\asprntffuns.obj \
    $(OBJD)\libgmp\printf\doprnt.obj \
    $(OBJD)\libgmp\printf\doprntf.obj \
    $(OBJD)\libgmp\printf\doprnti.obj \
    $(OBJD)\libgmp\printf\fprintf.obj \
    $(OBJD)\libgmp\printf\obprintf.obj \
    $(OBJD)\libgmp\printf\obprntffuns.obj \
    $(OBJD)\libgmp\printf\obvprintf.obj \
    $(OBJD)\libgmp\printf\printf.obj \
    $(OBJD)\libgmp\printf\printffuns.obj \
    $(OBJD)\libgmp\printf\repl-vsnprintf.obj \
    $(OBJD)\libgmp\printf\snprintf.obj \
    $(OBJD)\libgmp\printf\snprntffuns.obj \
    $(OBJD)\libgmp\printf\sprintf.obj \
    $(OBJD)\libgmp\printf\sprintffuns.obj \
    $(OBJD)\libgmp\printf\vasprintf.obj \
    $(OBJD)\libgmp\printf\vfprintf.obj \
    $(OBJD)\libgmp\printf\vprintf.obj \
    $(OBJD)\libgmp\printf\vsnprintf.obj \
    $(OBJD)\libgmp\printf\vsprintf.obj \
    $(OBJD)\libgmp\randbui.obj \
    $(OBJD)\libgmp\randclr.obj \
    $(OBJD)\libgmp\randdef.obj \
    $(OBJD)\libgmp\randiset.obj \
    $(OBJD)\libgmp\randlc2s.obj \
    $(OBJD)\libgmp\randlc2x.obj \
    $(OBJD)\libgmp\randmt.obj \
    $(OBJD)\libgmp\randmts.obj \
    $(OBJD)\libgmp\randmui.obj \
    $(OBJD)\libgmp\rands.obj \
    $(OBJD)\libgmp\randsd.obj \
    $(OBJD)\libgmp\randsdui.obj \
    $(OBJD)\libgmp\scanf\doscan.obj \
    $(OBJD)\libgmp\scanf\fscanf.obj \
    $(OBJD)\libgmp\scanf\fscanffuns.obj \
    $(OBJD)\libgmp\scanf\scanf.obj \
    $(OBJD)\libgmp\scanf\sscanf.obj \
    $(OBJD)\libgmp\scanf\sscanffuns.obj \
    $(OBJD)\libgmp\scanf\vfscanf.obj \
    $(OBJD)\libgmp\scanf\vscanf.obj \
    $(OBJD)\libgmp\scanf\vsscanf.obj \
    $(OBJD)\libgmp\tal-reent.obj \
    $(OBJD)\libgmp\version.obj    

CFLAGS=$(CFLAGS) -W3 -Gy -GR- -Oy- -wd4018 -wd4146 -wd4244 -wd4267 -wd4101 \
       -fp:precise -D _LIB -D HAVE_CONFIG_H -D _CRT_SECURE_NO_WARNINGS -I.

{$(TOP)}.c{$(OBJD)\libgmp}.obj:
	$(CC) -c $(CFLAGS) /Fo$(OBJD)\libgmp\ $<

{$(TOP)\fft}.c{$(OBJD)\libgmp\fft}.obj:
	$(CC) -c $(CFLAGS) /Fo$(OBJD)\libgmp\fft\ $<
	
{$(TOP)\mpf}.c{$(OBJD)\libgmp\mpf}.obj:
	$(CC) -c $(CFLAGS) /Fo$(OBJD)\libgmp\mpf\ $<

{$(TOP)\mpn}.c{$(OBJD)\libgmp\mpn}.obj:
	$(CC) -c $(CFLAGS) /Fo$(OBJD)\libgmp\mpn\ $<

{$(TOP)\mpq}.c{$(OBJD)\libgmp\mpq}.obj:
	$(CC) -c $(CFLAGS) /Fo$(OBJD)\libgmp\mpq\ $<
	
{$(TOP)\mpz}.c{$(OBJD)\libgmp\mpz}.obj:
	$(CC) -c $(CFLAGS) /Fo$(OBJD)\libgmp\mpz\ $<

{$(TOP)\printf}.c{$(OBJD)\libgmp\printf}.obj:
	$(CC) -c $(CFLAGS) /Fo$(OBJD)\libgmp\printf\ $<

{$(TOP)\scanf}.c{$(OBJD)\libgmp\scanf}.obj:
	$(CC) -c $(CFLAGS) /Fo$(OBJD)\libgmp\scanf\ $<
			
all: dirs $(STATICLIB)         \
     $(INCD)\gmp.h             \

dirs:
    @if not exist "$(BIND)" mkdir "$(BIND)" && echo.   Created $(BIND)
    @if not exist "$(INCD)" mkdir "$(INCD)" && echo.   Created $(INCD)
    @if not exist "$(OBJD)" mkdir "$(OBJD)" && echo.   Created $(OBJD)
    @if not exist "$(OBJD)\libgmp\fft" mkdir "$(OBJD)\libgmp\fft" && echo.   Created $(OBJD)\libgmp\fft
    @if not exist "$(OBJD)\libgmp\mpf" mkdir "$(OBJD)\libgmp\mpf" && echo.   Created $(OBJD)\libgmp\mpf
    @if not exist "$(OBJD)\libgmp\mpn" mkdir "$(OBJD)\libgmp\mpn" && echo.   Created $(OBJD)\libgmp\mpn
    @if not exist "$(OBJD)\libgmp\mpq" mkdir "$(OBJD)\libgmp\mpq" && echo.   Created $(OBJD)\libgmp\mpq
    @if not exist "$(OBJD)\libgmp\mpz" mkdir "$(OBJD)\libgmp\mpz" && echo.   Created $(OBJD)\libgmp\mpz
    @if not exist "$(OBJD)\libgmp\printf" mkdir "$(OBJD)\libgmp\printf" && echo.  Created $(OBJD)\libgmp\printf
    @if not exist "$(OBJD)\libgmp\scanf" mkdir "$(OBJD)\libgmp\scanf" && echo.   Created $(OBJD)\libgmp\scanf
    
$(INCD)\gmp.h : gmp.h
    @copy gmp.h $@ /y
    
$(STATICLIB): $(OBJECTS) $(HHEADERS)
	$(AR) $(ARFLAGS) -out:$@ $(OBJECTS)

# cleanup
clean:
	-del /q $(STATICLIB) 2>nul
	-del /q $(BIND)\libgmp.pdb 2>nul
	-rd /s/q $(OBJD)\libgmp 2>nul
	-del /q $(INCD)\gmp.h 2>nul